#include <chr>

#include "inc"

auto test() -> void
{
    using namespace chr;
    using namespace lrn;
    using namespace lrn::Literals;

    const auto a = lrn::Auto;
    const auto b = lrn::Unit(10);

    Dimension3 d = { 10_u, 20_u, Auto };

    LayoutInstance_ i;
}