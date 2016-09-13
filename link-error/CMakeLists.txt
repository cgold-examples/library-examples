cmake_minimum_required(VERSION 2.8)
project(foo)

add_library(boo Boo.cpp Boo.hpp)
add_library(foo Foo.cpp Foo.hpp)

add_executable(baz main.cpp)
target_link_libraries(baz foo)
