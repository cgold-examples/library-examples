cmake_minimum_required(VERSION 2.8)
project(use_bar)

find_package(bar CONFIG REQUIRED)

add_library(use_bar_static STATIC use_bar.cpp)
target_link_libraries(use_bar_static PUBLIC bar::bar)

add_library(use_bar_shared SHARED use_bar.cpp)
target_link_libraries(use_bar_shared PUBLIC bar::bar)
