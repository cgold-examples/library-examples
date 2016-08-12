cmake_minimum_required(VERSION 2.8)
project(foo)

add_subdirectory(bar)
add_subdirectory(baz)

add_executable(foo foo.cpp)
target_link_libraries(foo PUBLIC bar_static baz)
