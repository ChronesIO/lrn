#include <chr>

#include "inc"

auto test() -> void
{
    using namespace chr;
    using namespace lrn;
    using namespace lrn::Literals;

    LayoutInstance_ i;
    i.Size = { Auto, 10_u };
    i.Margin = { 3_pc, Auto };
    i.AspectRatio = 16.0 / 8;
    i.Alignment = Alignment::LeftCenter;
}