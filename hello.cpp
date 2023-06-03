#include <array>
#include <cstdio>
#include <fmt/core.h>
#include <fmt/format.h>

int main() {
  auto arr = std::to_array<int>({1, 2, 3, 4, 5});

  for (int val : arr) {
    fmt::print("{0}", val);
  }

  printf("\n");

  printf("Hello, world!\n");
  return 0;
}
