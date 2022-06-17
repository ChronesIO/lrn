#pragma once

#include <chr>

#include "def"
#include "./element.cc"

namespace lrn
{
    struct ElementScope : virtual Element
    {
        friend Element;
        friend ElementBase;

        virtual ~ElementScope() = default;

    private:
        auto Search_(ElementPath* p) -> Element*;
        auto SearchFromElementScope_(ElementPath p) -> chr::sp<Element>;

        auto Search_Element_(ElementPath* p) -> Element*;
        auto Search_Element_ByName_(chr::str_ref name) -> Element*;
        auto Search_Element_ById_(chr::str_ref id) -> Element*;

        auto Search_ElementScope_(ElementPath* p) -> ElementScope*;
        auto Search_ElementScope_ByName_(chr::str_ref name) -> ElementScope*;
        auto Search_ElementScope_ById_(chr::str_ref id) -> ElementScope*;

        auto Search_ParentElementScope_() -> ElementScope*;
    };
}