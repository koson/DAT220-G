cmake_minimum_required(VERSION 3.14)
project(08_sfml)

set(CMAKE_CXX_STANDARD 14)

add_executable(08_sfml main.cpp)
target_link_libraries(08_sfml sfml-graphics sfml-window sfml-system)