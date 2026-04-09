# CMake Minimum Version
cmake_minimum_required(VERSION 3.10)

# Project Name
project(
    CMake_Practice
    VERSION 1.0
    DESCRIPTION "A simple CMake project"
    LANGUAGES CXX)

add_executable(program main.cpp) # 실행파일 생성

add_subdirectory(lib) # 라이브러리 디렉토리 추가
target_link_libraries(program shape) # 라이브러리 링크!

target_compile_options(program PUBLIC -Wall) 
