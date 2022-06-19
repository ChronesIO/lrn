#pragma once

#include "./lay-instance-cache.cc"

namespace lrn
{
    struct LayoutInstance_
    {
        Element* Owner { };

        LayoutInstanceCache_ Cache { };
    };
}