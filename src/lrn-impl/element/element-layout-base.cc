#pragma once

#include <chr>

#include <lrn-impl/layout/core/inc>

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

    public:
        YGNode OuterNode;
        YGNode InnerNode;

    private:
        Align CachedAlignment_ = Align::Stretch;

    public:
        CHR_PROP(get = GetAlignment, put = SetAlignment)
        Align Alignment;
        CHR_ND auto GetAlignment() const -> Align { return CachedAlignment_; }
        auto SetAlignment(auto value) { NodeAlign_(value); }

    private:
        auto NodeAlign_(Align a) -> void;

    public:
        CHR_PROP(get = GetWidth, put = SetWidth)
        float Width;
        CHR_ND auto GetWidth() const -> float;
        auto SetWidth(float value) -> void;

        CHR_PROP(get = GetHeight, put = SetHeight)
        float Height;
        CHR_ND auto GetHeight() const -> float;
        auto SetHeight(float value) -> void;

        CHR_PROP(get = GetAutoWidth, put = SetAutoWidth)
        bool AutoWidth;
        CHR_ND auto GetAutoWidth() const -> bool;
        auto SetAutoWidth(bool value) -> void;

        CHR_PROP(get = GetAutoHeight, put = SetAutoHeight)
        bool AutoHeight;
        CHR_ND auto GetAutoHeight() const -> bool;
        auto SetAutoHeight(bool value) -> void;

        CHR_PROP(get = GetMinWidth, put = SetMinWidth)
        float MinWidth;
        CHR_ND auto GetMinWidth() const -> float;
        auto SetMinWidth(float value) -> void;

        CHR_PROP(get = GetMinHeight, put = SetMinHeight)
        float MinHeight;
        CHR_ND auto GetMinHeight() const -> float;
        auto SetMinHeight(float value) -> void;

        CHR_PROP(get = GetAutoMinWidth, put = SetAutoMinWidth)
        bool AutoMinWidth;
        CHR_ND auto GetAutoMinWidth() const -> bool;
        auto SetAutoMinWidth(bool value) -> void;

        CHR_PROP(get = GetAutoMinHeight, put = SetAutoMinHeight)
        bool AutoMinHeight;
        CHR_ND auto GetAutoMinHeight() const -> bool;
        auto SetAutoMinHeight(bool value) -> void;

        CHR_PROP(get = GetMaxWidth, put = SetMaxWidth)
        float MaxWidth;
        CHR_ND auto GetMaxWidth() const -> float;
        auto SetMaxWidth(float value) -> void;

        CHR_PROP(get = GetMaxHeight, put = SetMaxHeight)
        float MaxHeight;
        CHR_ND auto GetMaxHeight() const -> float;
        auto SetMaxHeight(float value) -> void;

        CHR_PROP(get = GetAutoMaxWidth, put = SetAutoMaxWidth)
        bool AutoMaxWidth;
        CHR_ND auto GetAutoMaxWidth() const -> bool;
        auto SetAutoMaxWidth(bool value) -> void;

        CHR_PROP(get = GetAutoMaxHeight, put = SetAutoMaxHeight)
        bool AutoMaxHeight;
        CHR_ND auto GetAutoMaxHeight() const -> bool;
        auto SetAutoMaxHeight(bool value) -> void;

        CHR_PROP(get = GetSize, put = SetSize)
        Index::Size Size;
        CHR_ND auto GetSize() const -> Index::Size { return { Width, Height }; }
        auto SetSize(Index::Size value) -> void;

        CHR_PROP(get = GetAutoSize, put = SetAutoSize)
        bool AutoSize;
        CHR_ND auto GetAutoSize() const -> bool { return AutoWidth && AutoHeight; }
        auto SetAutoSize(bool value) -> void;

        CHR_PROP(get = GetMinSize, put = SetMinSize)
        Index::Size MinSize;
        CHR_ND auto GetMinSize() const -> Index::Size { return { MinWidth, MinHeight }; }
        auto SetMinSize(Index::Size value) -> void;

        CHR_PROP(get = GetAutoMinSize, put = SetAutoMinSize)
        bool AutoMinSize;
        CHR_ND auto GetAutoMinSize() const -> bool { return AutoMinWidth && AutoMinHeight; }
        auto SetAutoMinSize(bool value) -> void;

        CHR_PROP(get = GetMaxSize, put = SetMaxSize)
        Index::Size MaxSize;
        CHR_ND auto GetMaxSize() const -> Index::Size { return { MaxWidth, MaxHeight }; }
        auto SetMaxSize(Index::Size value) -> void;

        CHR_PROP(get = GetAutoMaxSize, put = SetAutoMaxSize)
        bool AutoMaxSize;
        CHR_ND auto GetAutoMaxSize() const -> bool { return AutoMaxWidth && AutoMaxHeight; }
        auto SetAutoMaxSize(bool value) -> void;

        CHR_PROP(get = GetMarginLeft, put = SetMarginLeft)
        float MarginLeft;
        CHR_ND auto GetMarginLeft() const -> float;
        auto SetMarginLeft(float value) -> void;

        CHR_PROP(get = GetMarginTop, put = SetMarginTop)
        float MarginTop;
        CHR_ND auto GetMarginTop() const -> float;
        auto SetMarginTop(float value) -> void;

        CHR_PROP(get = GetMarginRight, put = SetMarginRight)
        float MarginRight;
        CHR_ND auto GetMarginRight() const -> float;
        auto SetMarginRight(float value) -> void;

        CHR_PROP(get = GetMarginBottom, put = SetMarginBottom)
        float MarginBottom;
        CHR_ND auto GetMarginBottom() const -> float;
        auto SetMarginBottom(float value) -> void;

        CHR_PROP(get = GetAutoMarginLeft, put = SetAutoMarginLeft)
        bool AutoMarginLeft;
        CHR_ND auto GetAutoMarginLeft() const -> bool;
        auto SetAutoMarginLeft(bool value) -> void;

        CHR_PROP(get = GetAutoMarginTop, put = SetAutoMarginTop)
        bool AutoMarginTop;
        CHR_ND auto GetAutoMarginTop() const -> bool;
        auto SetAutoMarginTop(bool value) -> void;

        CHR_PROP(get = GetAutoMarginRight, put = SetAutoMarginRight)
        bool AutoMarginRight;
        CHR_ND auto GetAutoMarginRight() const -> bool;
        auto SetAutoMarginRight(bool value) -> void;

        CHR_PROP(get = GetAutoMarginBottom, put = SetAutoMarginBottom)
        bool AutoMarginBottom;
        CHR_ND auto GetAutoMarginBottom() const -> bool;
        auto SetAutoMarginBottom(bool value) -> void;

        CHR_PROP(get = GetMargin, put = SetMargin)
        Index::Vec4F Margin;
        CHR_ND auto GetMargin() const -> Index::Vec4F;
        auto SetMargin(Index::Vec4F value) -> void;

        CHR_PROP(get = GetAutoMargin, put = SetAutoMargin)
        bool AutoMargin;
        CHR_ND auto GetAutoMargin() const -> bool;
        auto SetAutoMargin(bool value) -> void;

        CHR_PROP(get = GetPaddingLeft, put = SetPaddingLeft)
        float PaddingLeft;
        CHR_ND auto GetPaddingLeft() const -> float;
        auto SetPaddingLeft(float value) -> void;

        CHR_PROP(get = GetPaddingTop, put = SetPaddingTop)
        float PaddingTop;
        CHR_ND auto GetPaddingTop() const -> float;
        auto SetPaddingTop(float value) -> void;

        CHR_PROP(get = GetPaddingRight, put = SetPaddingRight)
        float PaddingRight;
        CHR_ND auto GetPaddingRight() const -> float;
        auto SetPaddingRight(float value) -> void;

        CHR_PROP(get = GetPaddingBottom, put = SetPaddingBottom)
        float PaddingBottom;
        CHR_ND auto GetPaddingBottom() const -> float;
        auto SetPaddingBottom(float value) -> void;

        CHR_PROP(get = GetAutoPaddingLeft, put = SetAutoPaddingLeft)
        bool AutoPaddingLeft;
        CHR_ND auto GetAutoPaddingLeft() const -> bool;
        auto SetAutoPaddingLeft(bool value) -> void;

        CHR_PROP(get = GetAutoPaddingTop, put = SetAutoPaddingTop)
        bool AutoPaddingTop;
        CHR_ND auto GetAutoPaddingTop() const -> bool;
        auto SetAutoPaddingTop(bool value) -> void;

        CHR_PROP(get = GetAutoPaddingRight, put = SetAutoPaddingRight)
        bool AutoPaddingRight;
        CHR_ND auto GetAutoPaddingRight() const -> bool;
        auto SetAutoPaddingRight(bool value) -> void;

        CHR_PROP(get = GetAutoPaddingBottom, put = SetAutoPaddingBottom)
        bool AutoPaddingBottom;
        CHR_ND auto GetAutoPaddingBottom() const -> bool;
        auto SetAutoPaddingBottom(bool value) -> void;

        CHR_PROP(get = GetPadding, put = SetPadding)
        Index::Vec4F Padding;
        CHR_ND auto GetPadding() const -> Index::Vec4F;
        auto SetPadding(Index::Vec4F value) -> void;

        CHR_PROP(get = GetAutoPadding, put = SetAutoPadding)
        bool AutoPadding;
        CHR_ND auto GetAutoPadding() const -> bool;
        auto SetAutoPadding(bool value) -> void;

    private:
        std::list<std::pair<Element*, YGNode>> ContentNodes_;

    private:
        virtual auto LayoutAdd(Element* e) -> void;
        virtual auto LayoutRemove(Element* e) -> void;

    private:
        auto CleanupNodes_() -> void;
        auto RemoveAllNodes_() -> void;

    private:
        static auto MakeDefaultNode_(YGNode& node) -> void;
    };
}