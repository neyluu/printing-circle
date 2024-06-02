cmake_minimum_required(VERSION 3.26)
project(printing_circle)

set(CMAKE_CXX_STANDARD 14)

add_executable(printing_circle
        main.cpp
        src/circle.cpp
        src/circle.h
        src/utils.cpp
        src/utils.h)
