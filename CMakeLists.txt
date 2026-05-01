cmake_minimum_required(VERSION 3.15)
project(uhd CXX)




add_library(uhd src/uhd.cpp)
target_include_directories(uhd PUBLIC include)



set_target_properties(uhd PROPERTIES PUBLIC_HEADER "include/uhd.h")
install(TARGETS uhd)
