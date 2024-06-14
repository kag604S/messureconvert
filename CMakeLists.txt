cmake_minimum_required(VERSION 3.28)
project(convert)

set(CMAKE_CXX_STANDARD 17)

add_executable(convert main.cpp
        convert.cpp
        convert.h)
