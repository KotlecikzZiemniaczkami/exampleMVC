cmake_minimum_required(VERSION 3.24)
project(exampleMVC)

set(CMAKE_CXX_STANDARD 17)

add_executable(exampleMVC main.cpp game_controler.cpp game_controler.h game_model.cpp game_model.h game_view.cpp game_view.h)
