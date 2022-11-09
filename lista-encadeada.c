#include <stdio.h>
#include <stdlib.h>
typedef struct Ponto {
  float x;
  float y;
  struct Ponto *prox;
} ponto;
ponto *listaPontos;
 void add(float x ,float y) 
{
  ponto *p = (ponto*)malloc(sizeof(ponto));
  p->x = x;
  p->y = y;
  p->prox = listaPontos;
  listaPontos = p;
}
int main(void) {
   add(3,4);
  return 0;
}
