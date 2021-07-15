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
// ordenaçao por bolha
  for(k=0;k<TAM-1;k++){
    for(j=0;j<TAM-1;j++){
      if(vetor[j]>vetor[j+1]){
        t = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = t;

      }
    }
  }
  printf("sequencia crescente => ");
  for(k=0;k<TAM;k++){
    printf("%d,",vetor[k]);
  }


  return 0;
}