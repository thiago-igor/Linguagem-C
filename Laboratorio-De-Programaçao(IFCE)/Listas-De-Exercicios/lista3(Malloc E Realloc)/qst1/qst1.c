#include <stdio.h>
#include <stdlib.h>
#define COMEÇO 82
#define FIM 237

int main(void) {

  int x,i, *p=NULL;

  printf("digite o tamanho do vetor:");
  scanf("%d",&x);

  p = (int*) malloc (sizeof(int) * x); 

  if(!p){ 
    printf("memoria insuficiente!!!");
    exit(1);
  }
  
  for(i =0;i<x;i++){
    *(p+i) = COMEÇO + rand() % (FIM+1-COMEÇO); // intervalo definido do vetor
  }

  int s = 0;
  printf("vetor gerado:\n");
  for(i=0;i<x;i++){
    printf("%d,",*(p+i));// lendo vetor
    s = s + *(p+i);// somando elementos
  }

  printf("\nsoma dos elementos:[%d]",s);
  
  return 0;
}