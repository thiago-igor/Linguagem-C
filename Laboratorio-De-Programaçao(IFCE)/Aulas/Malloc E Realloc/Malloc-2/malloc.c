// incluindo um vetor com tamanho determinado pelo usuario
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 10

int main(void) {

  //usar unsigned em "n"
  unsigned lin, col;
  int i,*v;

  srand(time(NULL));

  printf("DIMENSAO DA MATRIZ=> (LINHA):"); 
  scanf("%d",&lin);

  printf("DIMENSAO DA MATRIZ=> (COLUNA):"); 
  scanf("%d",&col);

  v = malloc(lin*col*sizeof(int)); // informando a quantidade

  if(!v){
    printf("nao tem memoria suficiente");
    exit(1);
  }

  for(i=0;i<(lin*col);i++){ // preenxendo o vetor
    v[i] = rand()%TAM;
  }

  for(i=0;i<(lin*col);i++){ // lendo vetor
    printf("[%d]",v[i]);
    if((i+1)%col==0) printf("\n"); // condiçao para pular as linhas e formar a matriz
  }
  return 0;
}