#pragma once
#include <cstddef>
#include <fmt/core.h>
#include <fmt/format.h>
#include <string_view>

class Boo {
  public:
    Boo(std::string_view name);
    Boo(size_t id);

    void show() const;

    size_t getId() const { return _id; }
    std::string_view getName() const { return _name; }

  private:
    std::string _name;
    size_t _id;
};
