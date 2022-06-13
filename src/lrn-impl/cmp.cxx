#include <chr>

#include "inc"

auto test() -> void
{
    using namespace chr;

    const auto a = lrn::Auto;
    const auto b = lrn::Unit(10);
    auto c = a.IsPixel;
}