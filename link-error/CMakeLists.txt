# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
project(baz)

include_directories(${CMAKE_CURRENT_LIST_DIR}) # for '#include <boo/Boo.hpp>'

add_subdirectory(boo)
add_subdirectory(foo)

add_executable(baz main.cpp)
target_link_libraries(baz foo)
