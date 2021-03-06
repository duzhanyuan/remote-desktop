//
// PROJECT:         Aspia Remote Desktop
// FILE:            base/files/base_paths.cc
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "base/files/base_paths.h"
#include "base/strings/unicode.h"
#include "base/logging.h"

#include <shlobj.h>

namespace aspia {

bool GetBasePath(BasePathKey key, FilePath& result)
{
    WCHAR buffer[MAX_PATH] = { 0 };

    switch (key)
    {
        case BasePathKey::FILE_EXE:
        {
            if (!GetModuleFileNameW(nullptr, buffer, _countof(buffer)))
                return false;
        }
        break;

        case BasePathKey::DIR_COMMON_APP_DATA:
        {
            if (FAILED(SHGetFolderPathW(nullptr, CSIDL_COMMON_APPDATA, nullptr,
                                        SHGFP_TYPE_CURRENT, buffer)))
            {
                return false;
            }
        }
        break;

        case BasePathKey::DIR_COMMON_DESKTOP:
        {
            if (FAILED(SHGetFolderPathW(nullptr, CSIDL_COMMON_DESKTOPDIRECTORY, nullptr,
                                        SHGFP_TYPE_CURRENT, buffer)))
            {
                return false;
            }
        }
        break;

        case BasePathKey::DIR_USER_DESKTOP:
        {
            if (FAILED(SHGetFolderPathW(nullptr, CSIDL_DESKTOPDIRECTORY, nullptr,
                                        SHGFP_TYPE_CURRENT, buffer)))
            {
                return false;
            }
        }
        break;

        case BasePathKey::DIR_USER_HOME:
        {
            if (FAILED(SHGetFolderPathW(nullptr, CSIDL_PROFILE, nullptr,
                                        SHGFP_TYPE_CURRENT, buffer)))
            {
                return false;
            }
        }
        break;

        case BasePathKey::DIR_CURRENT:
        {
            if (!GetCurrentDirectoryW(_countof(buffer), buffer))
                return false;
        }
        break;

        case BasePathKey::DIR_WINDOWS:
        {
            if (!GetWindowsDirectoryW(buffer, _countof(buffer)))
                return false;
        }
        break;

        case BasePathKey::DIR_SYSTEM:
        {
            if (!GetSystemDirectoryW(buffer, _countof(buffer)))
                return false;
        }
        break;
    }

    result.assign(buffer);

    return true;
}

} // namespace aspia
