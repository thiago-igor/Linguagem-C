#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 100

int main(void) {
  
  int k,j,x,y, vetor[TAM];
  int t;

  srand(time(NULL));

  printf("escolha um intervalo entre \n[X]:");
  scanf("%d",&x);
  printf("[Y]:");
  scanf("%d",&y);

  for(k=0;k<TAM;k++){
    vetor[k] = x+rand()%(y+1-x); 
  }

  printf("sequencia gerada =>");
  for(k=0;k<TAM;k++){
    printf("%d,",vetor[k]);
  }
  
  printf("\n\n");
//ordenaçao por seleçao
  for(k=0;k<TAM-1;k++){
    for(j=k+1;j<TAM;j++){
      if(vetor[k]>vetor[j]){
        t = vetor[k];
        vetor[k] = vetor[j];
        vetor[j] = t;

      }
    }
  }
  printf("sequencia crescente => ");
  for(k=0;k<TAM;k++){
    printf("%d,",vetor[k]);
  }


  return 0;
}