#include "Foo.hpp"
#include "Boo.hpp"

int Foo::foo(int, char) {
  Boo boo;
  return boo.boo(14, 15);
}
