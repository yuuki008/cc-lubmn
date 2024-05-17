#include <stdio.h>
#include "calc.h"
#include "showResult.h"

int main() {
  int a = 2, b = 3;
  printf("%d + %d = ", a, b);
  add(a, b);
  showResult();
  printf("%d - %d = ", a, b);
  sub(a, b);
  showResult();

  return 0;
}