# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
project(foo)

add_subdirectory(boo) # 3rd party library

add_executable(foo foo.cpp)
target_link_libraries(foo PUBLIC boo)
