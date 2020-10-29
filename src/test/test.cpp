#include "test.h"

Test::Test(double a) : data_(a) {}

double Test::add(double b) { return data_ + b; }

double Test::sub(double b) { return data_ - b; }
