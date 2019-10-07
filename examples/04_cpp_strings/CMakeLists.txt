cmake_minimum_required(VERSION 3.2)
project(cpp_strings)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(cpp_strings ${SOURCE_FILES})