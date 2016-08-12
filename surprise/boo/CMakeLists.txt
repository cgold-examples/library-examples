# boo/CMakeLists.txt

# Don't do that!
add_library(boo STATIC boo.cpp)
add_library(boo_shared SHARED boo.cpp)
