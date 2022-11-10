#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *p;
  int TAM,i;
  printf("digite o tamanho que sera alocado\n");
  scanf("%d",&TAM);
    p = (int*) malloc( TAM * sizeof(int));
    //Sizeof(tipo-de-dado) a função retorna o tamanho em byte do tipo que foi solicitado
    
    // malloc(tamanho*sizeof(tipo-de-dado)) a malloc difine o espaço em que os dados serão guardados e 
    //cria um ponteiro generico que aponta para onde foi alocado os dados.
    
    //(int*)  esse código fará a conversão do tipo genérico do ponteiro para o tipo desejado. 
    
    if(p == NULL){ // verificando se não houve erro na alocação de memoria, se o ponteiro for = NULL não foi possivel alocar memoria. 
      printf("Erro!\n");
    }
   else{
     for(i=0;i<TAM;i++){// criando laço para implementar os dados na memoria.
       printf("digite os dados\n");
       scanf("%d",&p[i]);
     }
    for(i=0;i<TAM;i++){// Imprimindo o resultado.
      printf("Impressao: %d\n",p[i]);
    }
     }
  
  return 0;
}
