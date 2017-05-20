// boo/Boo.cpp

#include "boo/Boo.hpp"

#include <iostream> // std::cout

void Boo::boo(thread_type&) {
#if __cplusplus >= 201103L
  std::cout << "Boo: 2011" << std::endl;
#else
  std::cout << "Boo: 1998" << std::endl;
#endif
}
