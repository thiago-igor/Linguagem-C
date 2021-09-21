// Faça um programa em C que leia um vetor de inteiros com 15 elementos e apresenta a sua soma.
#include <stdio.h>
#define TAM 15

int main(void) {
  int i,s, vetor[TAM];

  for(i=0;i<=TAM;i++){
    vetor[i] = i+1;
  }
  s=0;
  for(i=0;i<TAM;i++){
    s= vetor[i] + s;
  }

  for(i=0;i<TAM;i++){
    printf(" %d,",vetor[i]);
  }

  printf("\na soma desses termos E => %d",s);

  return 0;
}