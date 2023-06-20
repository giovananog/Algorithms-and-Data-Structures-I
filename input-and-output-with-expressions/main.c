#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, soma, sub, mult, div;
  scanf("%d%d", &x, &y);
  soma = (x + y);
  sub = (x - y);
  mult = (x * y);
  div = (x / y);
  
  printf("%d + %d = %d\n", x, y, soma);
  printf("%d - %d = %d\n", x, y, sub);
  printf("%d x %d = %d\n", x, y, mult);
  printf("%d / %d = %d\n", x, y, div);
  }
  
