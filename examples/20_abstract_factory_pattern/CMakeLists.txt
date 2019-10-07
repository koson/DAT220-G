cmake_minimum_required(VERSION 3.6)
project(24_abstract_factory_pattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES main.cpp student_factory.h actual_student_factory.cpp actual_student_factory.h student.h)
add_executable(24_abstract_factory_pattern ${SOURCE_FILES})