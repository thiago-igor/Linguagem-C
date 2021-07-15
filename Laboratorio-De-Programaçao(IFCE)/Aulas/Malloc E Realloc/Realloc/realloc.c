#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define linha "\n--------------------------\n"

int main(void) {
  
int i,n=0,nv=0,*v=NULL;
  srand(time(NULL));

  do{
    printf("digite quantos inteiros precisa:"); // tamanho do vetor
    scanf("%d",&n);
    // alocaçao dinamica
    v = (int*) realloc(v, n * sizeof(int));

    // gerar vetor
    for(i=nv;i<n;i++){
    *(v+i) = rand()%TAM;
    }

    // ler vetor
    for(i=0;i<n;i++){
    printf("[%p]\t%d\n",v+i,*(v+i));
  }

  nv = n;

  }while(n);

  free(v);
  
  return 0;
}