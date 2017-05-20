// boo/Boo.hpp

#ifndef BOO_HPP_
#define BOO_HPP_

#if __cplusplus >= 201103L
# include <thread> // std::thread
#endif

class Boo {
 public:
#if __cplusplus >= 201103L
  typedef std::thread thread_type;
#else
  class InternalThread {
  };
  typedef InternalThread thread_type;
#endif
  static void boo(thread_type&);
};

#endif // BOO_HPP_
