# baz/CMakeLists.txt

add_library(baz SHARED baz.cpp)
target_link_libraries(baz PUBLIC bar_shared)
