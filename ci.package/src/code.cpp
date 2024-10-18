#include <cpp11.hpp>
using namespace cpp11;

#include <H5public.h>
#include <zlib.h>

[[cpp11::register]]
int my_minimum_cpp(uint64_t a, size_t b) {
    return std::min(a, b);
}

[[cpp11::register]]
std::string hdf5_version_cpp() {
    unsigned int maj, min, rel;
    H5get_libversion(&maj, &min, &rel);
    return std::to_string(maj) + "." + std::to_string(min) + "." + std::to_string(rel);
}

[[cpp11::register]]
std::string zlib_version_cpp() {
    return std::string(zlibVersion());
}