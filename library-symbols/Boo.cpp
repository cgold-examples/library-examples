// Boo.cpp

#include "Boo.hpp"

#include "Foo.hpp"

int Boo::boo(int x, char a) {
  Foo foo;

  return foo.foo(a, 1.0 + x);
}
