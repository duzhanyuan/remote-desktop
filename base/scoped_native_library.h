/*
* PROJECT:         Aspia Remote Desktop
* FILE:            base/scoped_native_library.h
* LICENSE:         See top-level directory
* PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
*/

#ifndef _ASPIA_BASE_SCOPED_NATIVE_LIBRARY_H
#define _ASPIA_BASE_SCOPED_NATIVE_LIBRARY_H

#include "aspia_config.h"

#include "base/unicode.h"

class ScopedNativeLibrary
{
public:
    ScopedNativeLibrary(const char *lib_name)
    {
        lib_ = LoadLibraryW(UNICODEfromUTF8(lib_name).c_str());
    }

    virtual ~ScopedNativeLibrary()
    {
        FreeLibrary(lib_);
    }

    void* GetFunctionPointer(const char *function_name) const
    {
        return GetProcAddress(lib_, function_name);
    }

private:
    HMODULE lib_;
};

#endif // _ASPIA_BASE_SCOPED_NATIVE_LIBRARY_H
