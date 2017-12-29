# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
project(foo)

add_library(bar bar.cpp)
add_library(boo boo.cpp)
target_link_libraries(boo PUBLIC bar)

add_executable(foo foo.cpp)
target_link_libraries(foo PUBLIC boo)
