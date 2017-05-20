// foo/Foo.cpp

#include "foo/Foo.hpp"
#include "boo/Boo.hpp"

void Foo::foo(int, int) {
  Boo::value_type x(2);
  return Boo::boo(1, x);
}
