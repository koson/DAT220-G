cmake_minimum_required(VERSION 3.2)
project(cin_input)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp
    number.cpp
    number.h)

add_executable(cin_input ${SOURCE_FILES})