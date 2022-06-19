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

        LayoutRect(chr::Vector2F position, chr::Vector2F size)
            : Position(position.X, position.Y)
            , Size(size.X, size.Y)
        {
        }

        LayoutRect(chr::Vector4F v)
            : Position(v.X, v.Y)
            , Size(v.Z, v.W)
        {
        }

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

        CHR_PROP(get = GetAspectRatio)
        float AspectRatio;
        CHR_ND auto GetAspectRatio() const -> float { return Size.Y == 0 ? 0 : Size.X / Size.Y; }

        operator chr::Vector4F() const { return { Position, Size }; }
    };
}