cmake_minimum_required(VERSION 3.3)
project(dependency_injection)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    iscreen.h
    main.cpp
    screen.cpp
    screen.h)

add_executable(dependency_injection ${SOURCE_FILES})