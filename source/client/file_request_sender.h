//
// PROJECT:         Aspia Remote Desktop
// FILE:            protocol/file_request_sender.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_CLIENT__FILE_REQUEST_SENDER_H
#define _ASPIA_CLIENT__FILE_REQUEST_SENDER_H

#include "base/files/file_path.h"
#include "client/file_reply_receiver_proxy.h"

namespace aspia {

class FileRequestSenderProxy;

class FileRequestSender
{
public:
    FileRequestSender();
    virtual ~FileRequestSender();

    std::shared_ptr<FileRequestSenderProxy> request_sender_proxy();

protected:
    virtual void SendDriveListRequest(std::shared_ptr<FileReplyReceiverProxy> receiver) = 0;

    virtual void SendFileListRequest(std::shared_ptr<FileReplyReceiverProxy> receiver,
                                     const FilePath& path) = 0;

    virtual void SendCreateDirectoryRequest(std::shared_ptr<FileReplyReceiverProxy> receiver,
                                            const FilePath& path) = 0;

    virtual void SendDirectorySizeRequest(std::shared_ptr<FileReplyReceiverProxy> receiver,
                                          const FilePath& path) = 0;

    virtual void SendRemoveRequest(std::shared_ptr<FileReplyReceiverProxy> receiver,
                                   const FilePath& path) = 0;

    virtual void SendRenameRequest(std::shared_ptr<FileReplyReceiverProxy> receiver,
                                   const FilePath& old_name,
                                   const FilePath& new_name) = 0;

private:
    friend class FileRequestSenderProxy;

    std::shared_ptr<FileRequestSenderProxy> sender_proxy_;

    DISALLOW_COPY_AND_ASSIGN(FileRequestSender);
};

} // namespace aspia

#endif // _ASPIA_CLIENT__FILE_REQUEST_SENDER_H
