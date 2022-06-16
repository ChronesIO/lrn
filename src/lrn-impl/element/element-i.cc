#pragma once

#include <chr>

#include "def"

namespace lrn
{
    struct IElement
    {
        virtual ~IElement() = default;

        virtual auto Base() -> Element* { throw std::bad_function_call(); };
    };
}