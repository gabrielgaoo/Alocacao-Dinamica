#include <stdio.h>
#include <stdlib.h>
void realoca(int TAM);
int main(void) {
  int *p;
  int TAM, i;
  printf("digite o tamanho que sera alocado\n");
  scanf("%d", &TAM);
  p = (int *)calloc(TAM, sizeof(int));
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
  // aumentando o tamanho da memoria utilizando o realloc()
  printf("digite o tamanho que sera realocado\n");
  scanf("%d", &TAM);
  realoca(TAM);

  return 0;
}
void realoca(int TAM) {

  int *p;
  p = (int *)realloc(*p, TAM * sizeof(int));// a função realloc faz a alteração no tamanho do espaço alocado de uma alocação já existente.
  if (p == NULL) {
    printf("Erro!\n");
  }
  for (int i = 0; i < TAM; i++) {
    printf("digite os valores atualizados\n");
    scanf("%d", &p[i]);
  }
    for (int i = 0; i < TAM; i++) {
      printf("Impressao: %d\n", p[i]);
    }
  free(p);
}
