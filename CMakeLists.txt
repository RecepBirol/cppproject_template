cmake_minimum_required(VERSION 3.18)

if (NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif()

project(myproject)

# source directory
add_subdirectory(src)