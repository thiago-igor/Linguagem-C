
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 15

int main(void) {
  
  int k,j,x,y, vetor[TAM];
  int t;
  int *pv;

  srand(time(NULL));

  printf("escolha um intervalo entre \n[X]:");
  scanf("%d",&x);
  printf("[Y]:");
  scanf("%d",&y);

  pv = vetor;

  for(k=0;k<TAM;k++){
    //vetor[k] = x+rand()%(y+1-x);
    *(pv+k) = x+rand()%(y+1-x);
  }

  printf("sequencia gerada =>");
  for(k=0;k<TAM;k++){
    printf("%d,",*(pv+k));
  }
  
  printf("\n\n");
// ordenaçao por bolha
  for(k=0;k<TAM-1;k++){
    for(j=0;j<TAM-1;j++){
      if(*(pv+j)>*(pv+j+1)){
        t = *(pv+j);
        *(pv+j) = *(pv+j+1);
        *(pv+j+1) = t;

      }
    }
  }
  printf("sequencia crescente => ");
  for(k=0;k<TAM;k++){
    printf("%d,",*(pv+k));
  }


  return 0;
}