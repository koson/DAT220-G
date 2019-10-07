cmake_minimum_required(VERSION 3.3)
project(tiled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -pedantic")

set(SOURCE_FILES
        objects/layer.cpp
        objects/layer.h
        main.cpp
        map/map.cpp
        map/map.h
        objects/object.h
        objects/sprite.cpp
        objects/sprite.h game.cpp game.h)

add_executable(tiled ${SOURCE_FILES})

# Link with SFML dependencies
target_link_libraries(tiled jsoncpp sfml-graphics sfml-window sfml-system)
target_include_directories(tiled PUBLIC .)