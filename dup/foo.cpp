#include <iostream> // std::cout

int bar();
int baz();

int main() {
  std::cout << "bar + baz: " << bar() + baz() << std::endl;
}
