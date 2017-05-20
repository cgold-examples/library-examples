// foo/Foo.cpp

#include <foo/Foo.hpp>

#include <boo/Boo.hpp>

int Foo::foo() {
  Boo::thread_type t;
  Boo::boo(t);
  return 0;
}
