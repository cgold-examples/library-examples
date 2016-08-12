cmake_minimum_required(VERSION 3.4)
project(foo)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

add_library(foo foo.cpp)

install(
    TARGETS foo
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
