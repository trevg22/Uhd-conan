#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define UHD_EXPORT __declspec(dllexport)
#else
  #define UHD_EXPORT
#endif

UHD_EXPORT void uhd();
UHD_EXPORT void uhd_print_vector(const std::vector<std::string> &strings);
