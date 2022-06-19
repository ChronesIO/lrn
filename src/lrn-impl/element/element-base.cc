#pragma once

#include <chr>

#include "def"
#include "./element-content-base.cc"
#include "./element-layout-base.cc"

namespace lrn
{
    struct ElementBase : ElementContentBase, ElementLayoutBase, virtual IElement
    {
        friend Element;
        friend ElementContentBase;
        friend ElementLayoutBase;

        ElementBase();

    public:
        chr::str Name;

    public:
        chr::str Id;

    private:
        Element* Owner_ {};

    public:
        CHR_PROP(get = GetOwner)
        Element* Owner;
        auto GetOwner() const -> Element* { return Owner_; }

        CHR_PROP(get = GetIsAttached)
        bool IsAttached;
        auto GetIsAttached() const -> bool { return Owner_ != nullptr; }

    private:
        auto AttachTo(Element* e) -> void;
        auto DetachFrom(Element* e) -> void;

    protected:
        virtual auto Attached(Element* e) -> void { }
        virtual auto Detached(Element* e) -> void { }

    public:
        virtual auto Render(void* q, chr::hash t) -> void;

    protected:
        auto RenderContent(void* q, chr::hash t) -> void;

    public:
        auto Search(chr::str_ref p) -> std::shared_ptr<Element>;
        auto Search(ElementPath p) -> std::shared_ptr<Element>;

        auto TrySearch(chr::str_ref p) -> std::shared_ptr<Element>;
        auto TrySearch(ElementPath p) -> std::shared_ptr<Element>;

        template <class T> auto Search(chr::str_ref p) -> std::shared_ptr<T>;
        template <class T> auto Search(ElementPath p) -> std::shared_ptr<T>;

        template <class T> auto TrySearch(chr::str_ref p) -> std::shared_ptr<T>;
        template <class T> auto TrySearch(ElementPath p) -> std::shared_ptr<T>;

    private:
        auto SearchElementScope_() -> ElementScope*;

    protected:
        template <class T> static auto RenderQ(void* q, chr::hash t) -> T*
        {
            if (t == typeid(T).hash_code()) { return static_cast<T*>(q); }
        }
    };
}