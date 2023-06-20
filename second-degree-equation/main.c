#include <stdio.h>
#include <math.h>

int main (void) {
  float delta, x1, x2, a, b, c, x;
  scanf("%f %f %f", &a, &b, &c);
  delta = b*b - 4*a*c;

    
  if (delta<0) {
    printf("A equação %0.2fx^2 + %0.2fx + %0.2f não tem raizes reais", a, b, c); }
    else if (delta==0){
      x = (-b)/(2*a);
      printf("A equação %0.2fx^2 + %0.2fx + %0.2f tem a raiz x = %0.2f", a, b, c, x); }
        else {
          x1 = ((-b) + sqrt(delta))/ (2*a);
          x2 = ((-b) - sqrt(delta)) / (2*a);
          printf("A equação %0.2fx^2 + %0.2fx + %0.2f tem as raizes x1= %0.2f e x2 = %0.2f", a, b, c, x1, x2); }
  
}
