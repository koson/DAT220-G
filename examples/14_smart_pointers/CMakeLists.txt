cmake_minimum_required(VERSION 3.3)
project(smart_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(smart_pointers ${SOURCE_FILES})