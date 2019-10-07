cmake_minimum_required(VERSION 3.3)
project(class_constructor_destructor_memory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp point.cpp point.h)

add_executable(class_constructor_destructor_memory ${SOURCE_FILES})