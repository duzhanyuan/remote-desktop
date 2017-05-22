//
// PROJECT:         Aspia Remote Desktop
// FILE:            build_config.h
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_BUILD_CONFIG_H
#define _ASPIA_BUILD_CONFIG_H

// Target version
#define _WIN32_WINNT     0x0501
#define NTDDI_VERSION    0x05010300 // Windows XP SP3
#define _WIN32_IE        0x0800 // Internet Explorer 8.0
#define PSAPI_VERSION    1
#define WINVER           _WIN32_WINNT
#define _WIN32_WINDOWS   _WIN32_WINNT

static const unsigned short kDefaultHostTcpPort = 8050;

#endif // _ASPIA_BUILD_CONFIG_H
