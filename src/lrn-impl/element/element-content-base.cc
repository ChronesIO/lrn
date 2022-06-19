#pragma once

#include <chr>

#include "def"
#include "./element-i.cc"

namespace lrn
{
    struct ElementContentBase : virtual IElement
    {
        friend Element;
        friend ElementBase;

        ElementContentBase();
        ~ElementContentBase();

    private:
        std::list<chr::sp<Element>> Content_;

    public:
        CHR_PROP(get = GetContent)
        const decltype(Content_)& Content;
        CHR_ND auto GetContent() const -> const decltype(Content_)& { return Content_; }

    public:
        auto Contains(chr::sp_ref<Element> e) -> bool;
        auto Contains(Element* e) -> bool;

        auto Add(chr::sp_ref<Element> e) -> void;
        auto Remove(chr::sp_ref<Element> e) -> void;
        auto Remove(Element* e) -> void;

        auto RemoveAll() -> void;

    protected:
        virtual auto Added(Element* e) -> void { }
        virtual auto Removed(Element* e) -> void { }

    public:
        template <class T> auto CanAdd() -> bool { return CanAdd(typeid(T)); }
        virtual auto CanAdd(chr::type_ref t) -> bool { return true; }
    };
}