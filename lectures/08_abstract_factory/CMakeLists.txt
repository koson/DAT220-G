cmake_minimum_required(VERSION 3.14)
project(08_abstract_factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(08_abstract_factory main.cpp car.h car_factory.cpp car_factory.h car_factory_interface.h car_interface.h)