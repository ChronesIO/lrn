#pragma once

#include <chr>

#include <lrn-impl/layout/instance/inc>

#include "def"
#include "./element-i.cc"

namespace lrn
{
    struct ElementLayoutBase : virtual IElement
    {
        friend Element;
        friend ElementBase;

        ElementLayoutBase();
        ~ElementLayoutBase();

    private:
        union
        {
            lrn::LayoutInstance_ LayoutInstance_;
            lrn::LayoutInstance_ LI_;
        };

    private:
        chr::list<Element*> LayoutContent_;

    public:
        CHR_PROP(get = GetLayoutContent)
        chr::list<Element*> LayoutContent;
        CHR_ND auto GetLayoutContent() const -> const chr::list<Element*>& { return LayoutContent_; }

    private:
        virtual auto LayoutAdd(Element* e) -> void;
        virtual auto LayoutRemove(Element* e) -> void;

    protected:
        // bool RaiseOnLayoutChanged = false;
        // bool RaiseOnSizeChanged = false;
        // bool RaiseOnMinSizeChanged = false;
        // bool RaiseOnMaxSizeChanged = false;
        // bool RaiseOnMarginChanged = false;
        // bool RaiseOnPaddingChanged = false;
        // bool RaiseOnAspectRatioChanged = false;

        bool RaiseOnComputedLayoutChanged = false;
        bool RaiseOnComputedSizeChanged = false;
        bool RaiseOnComputedPositionChanged = false;

    protected:
        virtual auto OnComputedLayoutChanged() -> void { }
        virtual auto OnComputedSizeChanged() -> void { }
        virtual auto OnComputedPositionChanged() -> void { }
    };
}