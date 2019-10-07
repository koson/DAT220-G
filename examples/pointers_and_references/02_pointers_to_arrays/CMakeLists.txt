cmake_minimum_required(VERSION 3.3)
project(pointers_to_arrays)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(pointers_to_arrays ${SOURCE_FILES})