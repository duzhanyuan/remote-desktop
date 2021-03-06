//
// PROJECT:         Aspia Remote Desktop
// FILE:            desktop_capture/desktop_size.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_DESKTOP_CAPTURE__DESKTOP_SIZE_H
#define _ASPIA_DESKTOP_CAPTURE__DESKTOP_SIZE_H

#include <cstdint>

namespace aspia {

class DesktopSize
{
public:
    DesktopSize() = default;
    DesktopSize(int32_t width, int32_t height);
    DesktopSize(const DesktopSize& other);
    ~DesktopSize() = default;

    int32_t Width() const;
    int32_t Height() const;

    void Set(int32_t width, int32_t height);
    bool IsEmpty() const;
    bool IsEqual(const DesktopSize& other) const;
    void Clear();

    DesktopSize& operator=(const DesktopSize& other);

private:
    int32_t width_ = 0;
    int32_t height_ = 0;
};

} // namespace aspia

#endif // _ASPIA_DESKTOP_CAPTURE__DESKTOP_SIZE_H
