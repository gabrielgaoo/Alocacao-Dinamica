#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *p;
  int TAM, i;
  printf("digite o tamanho que sera alocado\n");
  scanf("%d", &TAM);
  p = (int *)calloc(TAM, sizeof(int));// a função calloc tem o mesmo papel da malloc a diferença e que a função calloc recebe dois argumentos de entrada
  // o tamanho e o tipo usando a função size of retornara os byte do tipo que será multiplicado pelo tamanho.
  if (p == NULL) {
    printf("Erro!\n");
  } else {
    for (i = 0; i < TAM; i++) {
      printf("digite os dados\n");
      scanf("%d", &p[i]);
    }
    for (i = 0; i < TAM; i++) {
      printf("Impressao: %d\n", p[i]);
    }
  }
  return 0;
}
