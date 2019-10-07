cmake_minimum_required(VERSION 3.6)
project(square)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pedantic")

set(SOURCE_FILES main.cpp square.cpp square.h config.h app.cpp app.h)
add_executable(square ${SOURCE_FILES})
target_link_libraries(square sfml-graphics sfml-window sfml-system)