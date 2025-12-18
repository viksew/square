#include <stdio.h>
#include "math.h"

int testf() {
  double eps = 0.000001;
  double res;
  double res1;
  double res2;

  // Test 1
  res = babylon(2.0, eps);
  if (res - 1.414214 > eps) {
    printf("-1\nT1 Fail: expected 1.414214, got %.6f\n", res);
    return 1;
  }

  // Test 2
  res1 = babylon (7.0, eps);
  if (res1 - 2.645751 > eps) {
    printf("-1\nT2 Fail: expected 2.645751, got %.6f\n", res1);
    return 1;
  }

  // Test 3
  res2 = babylon (11.0, eps);
  if (res2 - 3.316625 > eps) {
    printf("-1\nT3 Fail: expected 3.316625, got %.6f\n", res2);
    return 1;
  }

  printf("0\nAll tests passed.\n");
  printf("test1: %.6f\n", res);
  printf("test2: %.6f\n", res1);
  printf("test3: %.6f\n", res2);
  return 0;
}

int main() {
  return testf();
}
