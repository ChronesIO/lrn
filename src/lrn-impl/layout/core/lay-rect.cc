#pragma once

#include <chr>

namespace lrn
{
    struct LayoutRect
    {
        LayoutRect(float x, float y, float width, float height)
            : Position(x, y)
            , Size(width, height)
        {
        }

        LayoutRect(chr::vec2f position, chr::vec2f size)
            : Position(position.X, position.Y)
            , Size(size.X, size.Y)
        {
        }

        LayoutRect(chr::vec4f v)
            : Position(v.X, v.Y)
            , Size(v.Z, v.W)
        {
        }

        chr::vec2f Position;
        chr::vec2f Size;

        CHR_PROP(get = GetFirst)
        chr::vec2f First;
        CHR_ND auto GetFirst() const -> chr::vec2f { return Position; }

        CHR_PROP(get = GetSecond)
        chr::vec2f Second;
        CHR_ND auto GetSecond() const -> chr::vec2f { return Position + Size; }

        CHR_PROP(get = GetCenter)
        chr::vec2f Center;
        CHR_ND auto GetCenter() const -> chr::vec2f { return Position + (Size / 2); }

        CHR_PROP(get = GetAspectRatio)
        float AspectRatio;
        CHR_ND auto GetAspectRatio() const -> float { return Size.Y == 0 ? 0 : Size.X / Size.Y; }

        operator chr::vec4f() const { return { Position, Size }; }
    };
}