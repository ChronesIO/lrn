#pragma once

#include <chr>

#include "def"

namespace lrn
{
    struct ElementPath
    {
    public:
        explicit ElementPath(chr::list<chr::str> path)
            : Path(std::move(path))
        {
        }

    public:
        static auto From(const chr::list<chr::str>& p) -> ElementPath;
        static auto From(chr::str_ref s) -> ElementPath;

    public:
        chr::list<chr::str> Path;

    public:
        CHR_PROP(get = GetIsEmpty)
        bool IsEmpty;
        CHR_ND auto GetIsEmpty() const -> bool { return Path.empty(); }

        CHR_PROP(get = GetTarget)
        chr::str Target;
        CHR_ND auto GetTarget() const -> chr::str { return Path.front(); }
        auto TargetOr(chr::str_ref other) -> chr::str;

        CHR_PROP(get = GetElement)
        chr::str Element;
        CHR_ND auto GetElement() const -> chr::str { return Path.back(); }
        auto ElementOr(chr::str_ref other) -> chr::str;

        CHR_PROP(get = GetTargetsName)
        bool TargetsName;
        CHR_ND auto GetTargetsName() const -> bool { return IsName(Path.front()); }

        CHR_PROP(get = GetTargetsId)
        bool TargetsId;
        CHR_ND auto GetTargetsId() const -> bool { return IsId(Path.front()); }

        CHR_PROP(get = GetTargetsScope)
        bool TargetsScope;
        CHR_ND auto GetTargetsScope() const -> bool { return Path.size() > 1; }

        CHR_PROP(get = GetTargetsScopeOut)
        bool TargetsScopeOut;
        CHR_ND auto GetTargetsScopeOut() const -> bool { return TargetsScope && IsScopeOut(Target); }

        CHR_PROP(get = GetTargetsScopeStay)
        bool TargetsScopeStay;
        CHR_ND auto GetTargetsScopeStay() const -> bool { return TargetsScope && IsScopeStay(Target); }

        CHR_PROP(get = GetTargetsRoot)
        bool TargetsRoot;
        CHR_ND auto GetTargetsRoot() const -> bool { return IsRoot(Target); }

        CHR_PROP(get = GetTargetsElement)
        bool TargetsElement;
        CHR_ND auto GetTargetsElement() const -> bool { return Path.size() == 1; }

    public:
        void Next();

    public:
        static auto IsScopeStay(chr::str_ref s) -> bool { return s == "."; }
        static auto IsScopeOut(chr::str_ref s) -> bool { return s == ".."; }
        static auto IsName(chr::str_ref s) -> bool { return !s.starts_with("#"); }
        static auto IsId(chr::str_ref s) -> bool { return s.starts_with("#"); }
        static auto IsRoot(chr::str_ref s) -> bool { return s == "!"; }
    };
}