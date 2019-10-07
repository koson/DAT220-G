cmake_minimum_required(VERSION 3.3)
project(simple_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(simple_pointers ${SOURCE_FILES})