#include <stdio.h>

int main() {
  int i, maior, menor, s;
 
  s = 0;
  scanf("%i", &i);
   maior = menor = i;

  if (i < 0)
    printf("Nenhuma sequência foi digitada.");

  else if (i >= 0) {
    while (i >= 0) {
      scanf("%i",&i);
      s += 1;
      if (i>maior)
        maior = i;
      else if (i<menor && i >= 0)
        menor = i;
    }
    printf("Dos %i valores positivos lidos, o maior foi %i e o menor %i",s,maior,menor);
  }
}
