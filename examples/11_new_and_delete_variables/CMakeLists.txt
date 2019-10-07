cmake_minimum_required(VERSION 3.3)
project(new_and_delete_variables)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(new_and_delete_variables ${SOURCE_FILES})