#include "math.h"
#include <math.h>

double babylon(double n, double eps) {
  double x = n / 2.0;
  double prev;
  do {
    prev = x;
    x = 0.5 * (x + n / x);
  } while (fabs(x - prev) > eps);
  return x;
}
