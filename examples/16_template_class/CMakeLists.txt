cmake_minimum_required(VERSION 3.2)
project(template_class)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp
    print.h)

add_executable(template_class ${SOURCE_FILES})