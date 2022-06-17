#include "element-path.cc"

namespace lrn
{
    auto ElementPath::From(const chr::list<chr::str>& p) -> ElementPath { return ElementPath(p); }
    auto ElementPath::From(chr::str_ref s) -> ElementPath
    {
        // TODO: Implement chr::str_split
        throw chr::err("chr::str_split not implemented yet (element-path.cc)");
        // return ElementPath(s.Split("/"));
    }

    auto ElementPath::TargetOr(chr::str_ref other) -> chr::str
    {
        if (IsEmpty) return other;
        else return Target;
    }
    auto ElementPath::ElementOr(chr::str_ref other) -> chr::str
    {
        if (IsEmpty) return other;
        else return Element;
    }

    void ElementPath::Next()
    {
        if (Path.size() <= 1) throw std::bad_function_call();
        Path.erase(Path.begin());
    }
}