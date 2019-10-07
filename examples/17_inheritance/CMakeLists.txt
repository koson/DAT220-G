cmake_minimum_required(VERSION 3.3)
project(inheritance)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp point.cpp point.h point3d.cpp point3d.h)

add_executable(inheritance ${SOURCE_FILES})