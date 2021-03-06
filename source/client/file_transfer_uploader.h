//
// PROJECT:         Aspia Remote Desktop
// FILE:            client/file_transfer_uploader.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_CLIENT__FILE_TRANSFER_UPLOADER_H
#define _ASPIA_CLIENT__FILE_TRANSFER_UPLOADER_H

#include "client/file_transfer.h"
#include "proto/file_transfer_session.pb.h"

#include <queue>

namespace aspia {

class FileTransferUploader : public FileTransfer
{
public:
    FileTransferUploader(std::shared_ptr<FileRequestSenderProxy> sender, Delegate* delegate);
    ~FileTransferUploader() = default;

    void UploadObject(const FilePath& object_name,
                      const FilePath& source_path,
                      const FilePath& target_path);

private:
    class Task
    {
    public:
        Task(const FilePath& source_object_path,
             const FilePath& target_object_path,
             bool is_directory) :
            source_object_path_(source_object_path),
            target_object_path_(target_object_path),
            is_directory_(is_directory)
        {
            // Nothing
        }

        const FilePath& SourcePath() const
        {
            return source_object_path_;
        }

        const FilePath& TargetPath() const
        {
            return target_object_path_;
        }

        bool IsDirectory() const
        {
            return is_directory_;
        }

    private:
        const FilePath source_object_path_;
        const FilePath target_object_path_;
        const bool is_directory_;
    };

    uint64_t BuildTaskListForDirectoryContent(const FilePath& source_path,
                                              const FilePath& target_path);
    void RunTask(const Task& task);
    void RunNextTask();

    // FileReplyReceiver implementation.
    void OnDriveListRequestReply(std::unique_ptr<proto::DriveList> drive_list) final;

    void OnDriveListRequestFailure(proto::RequestStatus status) final;

    void OnFileListRequestReply(const FilePath& path,
                                std::unique_ptr<proto::FileList> file_list) final;

    void OnFileListRequestFailure(const FilePath& path,
                                  proto::RequestStatus status) final;

    void OnDirectorySizeRequestReply(const FilePath& path,
                                     uint64_t size) final;

    void OnDirectorySizeRequestFailure(const FilePath& path,
                                       proto::RequestStatus status) final;

    void OnCreateDirectoryRequestReply(const FilePath& path,
                                       proto::RequestStatus status) final;

    void OnRemoveRequestReply(const FilePath& path,
                              proto::RequestStatus status) final;

    void OnRenameRequestReply(const FilePath& old_name,
                              const FilePath& new_name,
                              proto::RequestStatus status) final;

    std::queue<Task> task_queue_;

    DISALLOW_COPY_AND_ASSIGN(FileTransferUploader);
};

} // namespace aspia

#endif // _ASPIA_CLIENT__FILE_TRANSFER_UPLOADER_H
