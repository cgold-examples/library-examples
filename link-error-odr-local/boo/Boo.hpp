// boo/Boo.hpp

#ifndef BOO_HPP_
#define BOO_HPP_

class Boo {
 public:
#ifdef BOO_USE_SHORT_INT
  typedef short int value_type;
#else
  typedef unsigned long long value_type;
#endif

  static void boo(int, value_type);
};

#endif // BOO_HPP_
