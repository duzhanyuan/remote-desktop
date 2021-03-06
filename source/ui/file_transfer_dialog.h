//
// PROJECT:         Aspia Remote Desktop
// FILE:            ui/file_transfer_dialog.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_UI__FILE_TRANSFER_DIALOG_H
#define _ASPIA_UI__FILE_TRANSFER_DIALOG_H

#include "base/files/file_path.h"
#include "base/macros.h"
#include "client/file_reply_receiver.h"
#include "client/file_request_sender_proxy.h"
#include "client/file_transfer.h"
#include "proto/file_transfer_session.pb.h"
#include "ui/resource.h"

#include <atlbase.h>
#include <atlapp.h>
#include <atlwin.h>
#include <atlctrls.h>
#include <atlmisc.h>

namespace aspia {

class UiFileTransferDialog :
    public CDialogImpl<UiFileTransferDialog>,
    public FileTransfer::Delegate
{
public:
    enum { IDD = IDD_FILE_TRANSFER };

    UiFileTransferDialog(std::shared_ptr<FileRequestSenderProxy> sender,
                         const FilePath& path,
                         const std::vector<proto::FileList::Item>& file_list);
    ~UiFileTransferDialog() = default;

private:
    BEGIN_MSG_MAP(UiFileTransferDialog)
        MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
        MESSAGE_HANDLER(WM_CLOSE, OnClose)

        COMMAND_ID_HANDLER(IDCANCEL, OnCancelButton)
    END_MSG_MAP()

    LRESULT OnInitDialog(UINT message, WPARAM wparam, LPARAM lparam, BOOL& handled);
    LRESULT OnClose(UINT message, WPARAM wparam, LPARAM lparam, BOOL& handled);
    LRESULT OnCancelButton(WORD notify_code, WORD control_id, HWND control, BOOL& handled);

    // FileTransfer::Delegate implementation.
    void OnObjectSizeNotify(uint64_t size) final;
    void OnTransferCompletionNotify() final;
    void OnObjectTransferNotify(const FilePath& source_path,
                                const FilePath& target_path) final;
    void OnDirectoryOverwriteRequest(const FilePath& object_name,
                                     const FilePath& path) final;
    void OnFileOverwriteRequest(const FilePath& object_name,
                                const FilePath& path) final;

    std::shared_ptr<FileRequestSenderProxy> sender_;

    const FilePath& path_;
    const std::vector<proto::FileList::Item>& file_list_;

    std::unique_ptr<FileTransfer> file_transfer_;

    DISALLOW_COPY_AND_ASSIGN(UiFileTransferDialog);
};

} // namespace aspia

#endif // _ASPIA_UI__FILE_TRANSFER_DIALOG_H
