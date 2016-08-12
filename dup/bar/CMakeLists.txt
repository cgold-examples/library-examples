# bar/CMakeLists.txt

# Don't do that!
add_library(bar_static STATIC bar.cpp)
add_library(bar_shared SHARED bar.cpp)
