#pragma once

#include <lrn-impl/layout/core/inc>

namespace lrn
{
    struct LayoutEngine_
    {
    protected:
        float UnitScale_ = 1;

    public:
        CHR_PROP(get = GetUnitScale, put = SetUnitScale) float UnitScale;
        CHR_ND auto GetUnitScale() const -> float;
        auto SetUnitScale(float v) -> void;



    public:
        auto ComputeLayout() -> void;
    };
}