#include <cpp11.hpp>
using namespace cpp11;

[[cpp11::register]]
int my_minimum_cpp(uint64_t a, size_t b) {
    return std::min(a, b);
}
