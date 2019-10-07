cmake_minimum_required(VERSION 3.3)
project(simple)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
    main.cpp)

add_executable(simple ${SOURCE_FILES})

# Link with SFML dependencies
target_link_libraries (simple sfml-graphics sfml-window sfml-system)