cmake_minimum_required(VERSION 3.2)
project(class)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    hello_world.cpp
    hello_world.h
    main.cpp)

add_executable(class ${SOURCE_FILES})