#pragma once

#include <chr>

#include "./lay-alignment.cc"
#include "./lay-dimension.cc"

namespace lrn
{
    struct LayoutInstanceCache_
    {

    };

    struct LayoutInstance_
    {
    public:
        LayoutInstanceCache_ Cache;

    public:
        bool AnyDirty = true;

        bool Collapsed = false;
        bool CollapsedDirty = true;

        Dimension2 Size = { Auto };
        Dimension2 MinSize = { Auto };
        Dimension2 MaxSize = { Auto };

        bool SizeDirty = true;
        bool MinSizeDirty = true;
        bool MaxSizeDirty = true;

        Alignment Alignment = Alignment::Stretch;
        bool AlignmentDirty = true;

        Dimension4 Margin = { Auto };
        Dimension4 Padding = { Auto };
        Dimension4 Border = { Auto };

        bool MarginDirty = true;
        bool PaddingDirty = true;
        bool BorderDirty = true;

        float AspectRatio = 0;
        bool AspectRatioDirty = true;

        float FlexGrow = 0;
        float FlexShrink = 0;

        bool FlexGrowDirty = true;
        bool FlexShrinkDirty = true;

    public:
        LayoutInstance_* Parent;
        chr::List<LayoutInstance_*> Children;
    };
}