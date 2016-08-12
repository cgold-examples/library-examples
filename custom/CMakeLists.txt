cmake_minimum_required(VERSION 2.8)
project(foo)

add_library(foo foo.cpp)
add_executable(boo boo.cpp)

target_link_libraries(boo PUBLIC foo)
