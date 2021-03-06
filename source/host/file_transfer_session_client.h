//
// PROJECT:         Aspia Remote Desktop
// FILE:            host/file_transfer_session_client.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_HOST__FILE_TRANSFER_SESSION_CLIENT_H
#define _ASPIA_HOST__FILE_TRANSFER_SESSION_CLIENT_H

#include "ipc/pipe_channel.h"
#include "proto/file_transfer_session.pb.h"
#include "ui/file_status_dialog.h"

namespace aspia {

class FileTransferSessionClient : private PipeChannel::Delegate
{
public:
    FileTransferSessionClient() = default;
    ~FileTransferSessionClient() = default;

    void Run(const std::wstring& input_channel_name,
             const std::wstring& output_channel_name);

private:
    // PipeChannel::Delegate implementation.
    void OnPipeChannelConnect(uint32_t user_data) override;
    void OnPipeChannelDisconnect() override;
    void OnPipeChannelMessage(const IOBuffer& buffer) override;

    void WriteMessage(const proto::file_transfer::HostToClient& message);

    void ReadDriveListRequestMessage();
    void ReadFileListRequestMessage(const proto::FileListRequest& request);
    void ReadCreateDirectoryRequest(const proto::CreateDirectoryRequest& request);
    void ReadRenameRequest(const proto::RenameRequest& request);
    void ReadRemoveRequest(const proto::RemoveRequest& request);

    std::unique_ptr<PipeChannel> ipc_channel_;
    std::mutex outgoing_lock_;

    std::unique_ptr<UiFileStatusDialog> status_dialog_;

    DISALLOW_COPY_AND_ASSIGN(FileTransferSessionClient);
};

} // namespace aspia

#endif // _ASPIA_HOST__FILE_TRANSFER_SESSION_CLIENT_H
