#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

void preencher(int *p, int t);
void ler( int *p, int t);
void obtmenor(int*pv, int t, int *p);

int main(int argc, char * argv[]) {

  if(argc!=2){
    printf("invalido! formato: <tamanho do vetor>");
    exit(1);
  }

  int tam = atoi(argv[1]);
  int *p = (int *) malloc(tam * sizeof(int));
  int menor;

  preencher(p,tam);
  
  printf("\n----------------\n");

  ler(p,tam);

  obtmenor(p,tam,&menor);

  printf("\nmenor valor do vetor: %d",menor);
  
free(p);
  


  return 0;
}

void preencher(int *p, int t){
  int k;
  srand(time(NULL));
  for(k=0;k<t;k++){
    *(p+k) = rand() % MX;

  }
}

void ler( int *p, int t){
  int k;
  for(k=0;k<t;k++){
    printf("%d,",*(p+k));
  }
}

void obtmenor(int*p, int t, int *pm){
int k;
  *pm = *p;

  for(k =1; k<t ;k++){
    if(*pm > *(p+k)){
      *pm = *(p+k);
    }
  }
}