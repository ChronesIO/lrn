#include "element.cc"

namespace lrn
{
    ElementLayoutBase::ElementLayoutBase()
    {

    }
    ElementLayoutBase::~ElementLayoutBase()
    {

    }

    auto ElementLayoutBase::LayoutAdd(Element* e) -> void
    {
        if (!e) throw std::bad_function_call();
    }
    auto ElementLayoutBase::LayoutRemove(Element* e) -> void
    {
        if (!e) throw std::bad_function_call();
    }
}