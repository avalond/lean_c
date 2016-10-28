cmake_minimum_required(VERSION 3.6)
project(lean_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES base/while.cpp main.cpp base/for.cpp base/getCurrentTime.cpp)
add_executable(lean_c ${SOURCE_FILES})