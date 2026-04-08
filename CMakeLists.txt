# CMake Minimum Version
cmake_minimum_required(VERSION 3.10)

# Project Name
project(
    CMake_Practice
    VERSION 1.0
    DESCRIPTION "A simple CMake project"
    LANGUAGES CXX)

add_subdirectory(lib)

add_executable(program main.cpp)

target_link_libraries(program shape)

target_compile_options(program PUBLIC -Wall)
