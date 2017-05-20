# foo/CMakeLists.txt

add_library(foo Foo.cpp Foo.hpp)
target_link_libraries(foo PUBLIC boo)

set_target_properties(foo PROPERTIES CXX_STANDARD 11)
