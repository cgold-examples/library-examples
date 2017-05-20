# boo/CMakeLists.txt

add_definitions(-DBOO_USE_SHORT_INT) # This is wrong!
add_library(boo Boo.hpp Boo.cpp)
