#pragma once

#include "chr"

namespace lrn
{
    enum class Alignment
    {
        HPart = 0b1111'0000,
        VPart = 0b0000'1111,

        HStretch = 0b1000'0000,
        VStretch = 0b0000'1000,

        HCenter = 0b0100'0000,
        VCenter = 0b0000'0100,

        HLeft = 0b0010'0000,
        HRight = 0b0001'0000,

        VTop =   0b0000'0010,
        VBottom =  0b0000'0001,

        Stretch = HStretch | VStretch,
        Center =  HCenter | VCenter,

        Left =   HLeft | VStretch,
        Right =  HRight | VStretch,

        Top =   VTop | HStretch,
        Bottom =  VBottom | HStretch,

        LeftTop = HLeft | VTop,
        RightTop = HRight | VTop,

        LeftBottom = HLeft | VBottom,
        RightBottom = HRight | VBottom,

        LeftCenter = HLeft | VCenter,
        RightCenter = HRight | VCenter,

        TopCenter = VTop | HCenter,
        BottomCenter = VBottom | HCenter,
    };
}