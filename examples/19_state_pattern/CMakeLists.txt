cmake_minimum_required(VERSION 3.6)
project(23_state_pattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES main.cpp machine.cpp machine.h state.h statehello.cpp statehello.h stategoodbye.cpp stategoodbye.h stateexit.cpp stateexit.h)
add_executable(23_state_pattern ${SOURCE_FILES})