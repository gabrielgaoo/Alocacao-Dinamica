#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *p;
  int TAM,i;
  printf("digite o tamanho que sera alocado\n");
  scanf("%d",&TAM);
    p = (int*) malloc( TAM * sizeof(int));
    if(p == NULL){
      printf("Erro!\n");
    }
   else{
     for(i=0;i<TAM;i++){
       printf("digite os dados\n");
       scanf("%d",&p[i]);
     }
    for(i=0;i<TAM;i++){
      printf("Impressao: %d\n",p[i]);
    }
     }
  
  return 0;
}
