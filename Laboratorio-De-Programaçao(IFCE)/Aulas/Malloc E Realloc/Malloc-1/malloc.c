// incluindo um vetor com tamanho determinado pelo usuario
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 20

int main(void) {

  //usar unsigned em "n"
  unsigned n;
  int i,*v;

  srand(time(NULL));

  printf("digite quantos inteiros precisa:"); // tamanho do vetor
  scanf("%d",&n);

  v = malloc(sizeof(int)*n); // calculando o tamanho do vetor com malloc

  if(!v){  // quando nao tem memoria suficiente v recebe NULL, logo se v == NULL ele faz o if  
    printf("nao tem memoria suficiente");
    exit(1);
  }

  for(i=0;i<n;i++){
    v[i] = rand()%TAM;
  }

  for(i=0;i<n;i++){
    printf("%d,",v[i]);
  }

   
  
  return 0;
}