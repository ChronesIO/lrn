#pragma once

#include <chr>

namespace lrn
{
    enum class DimensionType
    {
        Auto,
        Unit,
        Percent,
        Pixel
    };

    struct Dimension
    {
        constexpr Dimension(const Dimension&) = default;
        explicit constexpr Dimension(chr::f32 value, DimensionType type)
            : Value_(value)
            , Type_(type)
        {
        }

    protected:
        chr::f32 Value_ = 0;
        DimensionType Type_ = DimensionType::Auto;

    public:
        CHR_PROP(get = GetValue) chr::f32 Value;
        CHR_ND auto GetValue() const -> chr::f32 { return Value_; }

        CHR_PROP(get = GetType) DimensionType Type;
        CHR_ND auto GetType() const -> DimensionType { return Type_; }

    public:
        CHR_ND auto Is(DimensionType t) const -> bool { return Type == t; }

        CHR_PROP(get = GetIsAuto) bool IsAuto;
        CHR_ND auto GetIsAuto() const -> bool { return Type == DimensionType::Auto; }

        CHR_PROP(get = GetIsUnit) bool IsUnit;
        CHR_ND auto GetIsUnit() const -> bool { return Type == DimensionType::Unit; }

        CHR_PROP(get = GetIsPercent) bool IsPercent;
        CHR_ND auto GetIsPercent() const -> bool { return Type == DimensionType::Percent; }

        CHR_PROP(get = GetIsPixel) bool IsPixel;
        CHR_ND auto GetIsPixel() const -> bool { return Type == DimensionType::Pixel; }

    public:
        bool operator==(const Dimension&) const = default;
        bool operator!=(const Dimension&) const = default;
    };

    constexpr Dimension Auto = Dimension(0, DimensionType::Auto);
    constexpr auto Unit(float v) -> Dimension { return Dimension(v, DimensionType::Unit); }
    constexpr auto Percent(float v) -> Dimension { return Dimension(v, DimensionType::Percent); }
    constexpr auto Pixel(float v) -> Dimension { return Dimension(v, DimensionType::Pixel); }
}