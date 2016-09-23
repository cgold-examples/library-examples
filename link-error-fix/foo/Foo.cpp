// foo/Foo.cpp

#include "foo/Foo.hpp"
#include "boo/Boo.hpp"

int Foo::foo(int, char) {
  Boo boo;
  return boo.boo(14, 15);
}
