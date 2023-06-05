#include "boo.hpp"

#include <array>
#include <cstdio>
#include <fmt/core.h>
#include <fmt/format.h>

int TEST=10;

int main() {
    auto arr = std::to_array<int>({1, 2, 3, 4, 5});

    for (int val : arr) {
        fmt::print("{0}", val);
    }

    fmt::print("global variable  TEST = {0}", TEST);

    printf("\n");

    // test class `Boo`
    Boo b1("John Liu");
    Boo b2(-1);

    b1.show();
    b2.show();

    printf("Hello, world!\n");
    return 0;
}
