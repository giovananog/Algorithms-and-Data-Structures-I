#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[30];
  int celular;
  char twitter[20];
} registro;

void sort(registro agenda[], int n) {

  char aux[100];
  int auxI[100];
  registro r;

  for (int i = 0; i < (n - 1); i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
        r = agenda[i];
        agenda[i] = agenda[j];
        agenda[j] = r;
      }
    }
  }
}

int main(void) {

  FILE *arq;
  registro agenda[100];

  int n, i;
  scanf("%d", &n); // qntd de linhas do arquivo

  if ((arq = fopen("agenda.csv", "rt")) == NULL) {
    puts("erro na abertura");
    exit(10);
  }

  for (i = 0; i < n; i++) {
    fscanf(arq, "%[^;]", agenda[i].nome);
    fseek(arq, +1, SEEK_CUR);
    fscanf(arq, "%d[^;]", &agenda[i].celular);
    fseek(arq, +1, SEEK_CUR);
    fscanf(arq, "%s[^;]", agenda[i].twitter);
    fseek(arq, +1, SEEK_CUR);
  }

  i = 0;
  ordena(&agenda[i], n);

  fclose(arq);

  FILE *arq2;
  arq2 = fopen("agenda-ord.csv", "wb");

  for (i = 0; i < n; i++) {
    fprintf(arq2, "%s;", agenda[i].nome);
    fprintf(arq2, "%d;", agenda[i].celular);
    fprintf(arq2, "%s\n", agenda[i].twitter);
  }
  fclose(arq2);
}
