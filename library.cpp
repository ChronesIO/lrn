#include "library.h"

#include <iostream>

void hello()
{
    using namespace chr;

    std::cout << "Hello, World!" << std::endl;

    auto l = "Hello there" | len;
    auto l2 = "Naaaa" | len;
    nla<int> a = nlv(10);
    i32 i = 10;
}
