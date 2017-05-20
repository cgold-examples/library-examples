# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
project(foo)

include_directories("${CMAKE_CURRENT_LIST_DIR}") # for '#include <boo/Boo.hpp>'

add_subdirectory(boo)
add_subdirectory(foo)

add_executable(baz baz.cpp)
target_link_libraries(baz PUBLIC foo)
