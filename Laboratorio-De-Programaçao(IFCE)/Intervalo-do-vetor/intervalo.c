#include <stdio.h>
#include <stdlib.h>
#define COMECO 82
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
    *(p+i) = COMECO + rand() % (FIM+1-COMECO); // intervalo definido do vetor
  }