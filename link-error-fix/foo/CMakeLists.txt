# foo/CMakeLists.txt

add_library(foo Foo.cpp Foo.hpp)
target_link_libraries(foo PUBLIC boo)
