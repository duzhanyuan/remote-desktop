//
// PROJECT:         Aspia Remote Desktop
// FILE:            protocol/file_packetizer.cc
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "protocol/file_packetizer.h"
#include "base/logging.h"

namespace aspia {

// When transferring a file is divided into parts and each part is
// transmitted separately.
// This parameter specifies the size of the part.
static const size_t kPacketPartSize = 5 * 1024; // 5 kB

FilePacketizer::FilePacketizer(std::experimental::filesystem::path&& file_path,
                               std::ifstream&& file_stream) :
    file_path_(std::move(file_path)),
    file_stream_(std::move(file_stream))
{
    file_stream_.seekg(0, file_stream_.end);
    file_size_ = static_cast<size_t>(file_stream_.tellg());
    file_stream_.seekg(0);

    left_size_ = file_size_;
}

std::unique_ptr<FilePacketizer> FilePacketizer::Create(const std::string& path)
{
    std::experimental::filesystem::path file_path =
        std::experimental::filesystem::u8path(path);

    std::ifstream file_stream;

    file_stream.open(file_path, std::ifstream::binary);
    if (!file_stream.is_open())
    {
        LOG(ERROR) << "Unable to open file: " << file_path;
        return nullptr;
    }

    return std::unique_ptr<FilePacketizer>(
        new FilePacketizer(std::move(file_path), std::move(file_stream)));
}

char* FilePacketizer::GetOutputBuffer(proto::FilePacket* packet, size_t size)
{
    packet->mutable_data()->resize(size);
    return const_cast<char*>(packet->mutable_data()->data());
}

FilePacketizer::State FilePacketizer::CreateNextPacket(
    std::unique_ptr<proto::FilePacket>& packet)
{
    if (!file_size_ || !left_size_)
        return State::ERROR;

    if (!file_stream_.is_open())
        return State::ERROR;

    if (file_path_.empty())
        return State::ERROR;

    packet = std::make_unique<proto::FilePacket>();

    size_t packet_buffer_size = kPacketPartSize;

    if (left_size_ < kPacketPartSize)
        packet_buffer_size = static_cast<size_t>(left_size_);

    char* packet_buffer = GetOutputBuffer(packet.get(), packet_buffer_size);

    file_stream_.seekg(file_size_ - left_size_);
    file_stream_.read(packet_buffer, packet_buffer_size);
    if (file_stream_.fail())
    {
        LOG(WARNING) << "Unable to read file: " << file_path_;
        return State::ERROR;
    }

    // Set file path and size in first packet.
    if (left_size_ == file_size_)
    {
        packet->set_full_size(file_size_);
        packet->set_path(file_path_.u8string());
    }

    left_size_ -= packet_buffer_size;

    if (!left_size_)
    {
        file_size_ = 0;
        file_stream_.close();
        file_path_.clear();

        return State::LAST_PACKET;
    }

    return State::PACKET;
}

} // namespace aspia
