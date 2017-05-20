# boo/CMakeLists.txt

add_library(boo Boo.hpp Boo.cpp)
target_compile_definitions(boo PUBLIC "BOO_USE_SHORT_INT")
