#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define linha "\n--------------------------\n"

int main(void) {
  
int i,n,nv,*v=NULL;

  srand(time(NULL));

  printf("digite quantos inteiros precisa:"); // tamanho do vetor
  scanf("%d",&n);

  v = (int*) calloc(n, sizeof(int));
  //v = (int*) malloc(sizeof(int)*n); // calculando o tamanho do vetor com malloc

  if(!v){
    puts("nao tem memoria suficiente");
    exit(1);
  }

  for(i=0;i<n;i++){
    *(v+i) = rand()%TAM;
  }

  for(i=0;i<n;i++){
    printf("[%p]\t%d\n",v+i,*(v+i));
  }

  int x=1;
  do{
    printf("digite a nova quantidade de inteiros:"); // tamanho do vetor
    scanf("%d",&nv);
    v = (int*) realloc(v, nv * sizeof(int));

    srand(time(NULL));

    for(i=n;i<nv;i++){
      *(v+i) = rand()%TAM;
    }

    for(i=0;i<nv;i++){
      printf("[%p]\t%d\n",v+i,*(v+i));
    }
    printf(linha);
    printf("digite [0] para pausar e [1] para continuar");
    printf(linha);
    scanf("%d",&x);
  }while(x!=0);

  free(v);

 
  
  return 0;
}