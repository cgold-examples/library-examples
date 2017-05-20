# foo/CMakeLists.txt

add_library(foo Foo.hpp Foo.cpp)
target_link_libraries(foo PUBLIC boo)
