#pragma once

#include <chr>

namespace lrn
{
    struct LayoutRect
    {
        chr::Vector2F Position;
        chr::Vector2F Size;

        CHR_PROP(get = GetFirst)
        chr::Vector2F First;
        CHR_ND auto GetFirst() const -> chr::Vector2F { return Position; }

        CHR_PROP(get = GetSecond)
        chr::Vector2F Second;
        CHR_ND auto GetSecond() const -> chr::Vector2F { return Position + Size; }

        CHR_PROP(get = GetCenter)
        chr::Vector2F Center;
        CHR_ND auto GetCenter() const -> chr::Vector2F { return Position + (Size / 2); }
    };
}