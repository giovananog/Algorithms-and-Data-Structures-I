/*------------------------------------------------------
 * Segundo trabalho AEDs I - Programação
 * Assunto: Matrizes em linguagem C
 * Prof. Luiz Eduardo da Silva
 * Aluno: Giovana Nogueira Oliveira
 *-----------------------------------------------------*/
#include <stdio.h>

int main(void) {
  int i, j, p, v, k, l, i2, j2;
  float M[40][20];
  
  scanf("%i %i", &p, &v);
  do {
    scanf("%i %i ", &i, &j);
    scanf("%f", &M[i][j]);
  } while (i != 0 || j != 0 || M[i][j] != 0);
  k = 1;
  do {
    printf("         v%i", k);
    k++;
  } while (k <= v);
  printf("\n");
  printf("    +");
  for (i = 1; i < v; i++) {
    printf("------------");
  }
  printf("----");
  printf("+\n");
  j = 1;
  l = 1;
  i = 1;
  float somaL = 0;
  do {
    printf(" p%i |", l);
    l++;
    for (i2 = i; j < v + 1; j++) {
      printf("%9.2f ", M[j][i]);
      somaL = somaL + M[j][i];
    }
    printf("| %8.2f", somaL);
    printf("\n");
    somaL = 0;
    j = 1;
    i++;
  } while (l < p + 1);
  printf("    +");
  for (i = 1; i < v; i++) {
    printf("------------");
  }
  printf("----");
  printf("+\n");
  float somaC = 0;
  i = 1;
  j = 1;
  do {
    for (j2 = j; i < p + 1; i++) {
      somaC = somaC + M[j][i];
    }
    printf(" %10.2f", somaC);
    somaC = 0;
    i = 1;
    j++;
  } while (j < v + 1);
}
