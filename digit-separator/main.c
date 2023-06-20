#include <stdio.h>

void separaDigitos(int num, char *digitos) {
 sprintf(digitos, "%d", num);
}

int main(void) {
  int num;
  char digitos[10];
  printf("Digite um número: ");
  scanf("%d", &num);
  separaDigitos (num, digitos);
  for (int i = 0; digitos[i]; i++)
    printf("digito[%d] = %c\n", i, digitos[i]);
  return 0;
}
