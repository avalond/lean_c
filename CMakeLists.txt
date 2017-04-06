cmake_minimum_required(VERSION 3.7)
project(lean_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        base/c++array.cpp
        base/for.cpp
        base/getCurrentTime.cpp
        base/while.cpp
        main.cpp)

add_executable(lean_c ${SOURCE_FILES})