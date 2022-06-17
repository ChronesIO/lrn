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

    private:
        virtual auto LayoutAdd(Element* e) -> void;
        virtual auto LayoutRemove(Element* e) -> void;
    };
}