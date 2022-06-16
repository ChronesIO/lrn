#include "lay-engine.cc"

namespace lrn
{
    auto LayoutEngine_::GetUnitScale() const -> float { return UnitScale_; }
    auto LayoutEngine_::SetUnitScale(float v) -> void
    {
        if (UnitScale_ == v) return;
        UnitScale_ = v;
        //
    }

    auto LayoutEngine_::ComputeLayout() -> void
    {
        //
    }
}