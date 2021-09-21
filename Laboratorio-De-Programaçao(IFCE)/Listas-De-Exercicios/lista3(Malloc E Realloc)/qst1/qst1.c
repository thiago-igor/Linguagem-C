/*Escreva um programa que some todos os elementos de um vetor de inteiros alocado dinamicamente.
A quantidade de elementos devem ser fornecidas pelo usuario. Os valores do vetor devem pertencer
ao intervalo [82, 237]. Utilize a funçao rand() para alimentar o vetor com valores pseudo-aleatorios.*/
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

  int s = 0;
  printf("vetor gerado:\n");
  for(i=0;i<x;i++){
    printf("%d,",*(p+i));// lendo vetor
    s = s + *(p+i);// somando elementos
  }

  printf("\nsoma dos elementos:[%d]",s);

  free(p);
  
  return 0;
}