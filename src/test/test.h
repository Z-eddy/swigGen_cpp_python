#ifndef TEST_H
#define TEST_H
#include "test_global.h"

class TEST_EXPORT Test {
 public:
  Test(double a);
  double add(double b);
  double sub(double b);

 private:
  double data_;
};

#endif  // TEST_H
