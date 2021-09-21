/*Escreva um programa em C que informe o endere ̧co do menor elemento de um vetor de inteiros
gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

void preencher(int *, int );
void ler( int *, int);
void obtmenor(int*pv, int , int *);
int *EnderecoMenorValor(int *, int );

int main(int argc, char * argv[]) {

  if(argc!=2){
    printf("invalido! formato: <tamanho do vetor>");
    exit(1);
  }

  int tam = atoi(argv[1]);
  int *p = (int *) malloc(tam * sizeof(int));
  int menor;
  int end_menor;

  preencher(p,tam);
  
  printf("\n----------------\n");

  ler(p,tam);

  obtmenor(p,tam,&menor);


printf("\nmenor valor do vetor: %d",menor);

printf("\nEndereco do menor valor do vetor: [%p]",EnderecoMenorValor(p,tam));
  
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

int *EnderecoMenorValor(int *p, int t){
    int k, *pm, menor;

    menor = *p; // valor
    pm = p; // endereço

    for(k=0;k<t;k++){
        if(menor>*(p+k)){
            menor = *(p+k);
            pm = (p+k);
        }

    return pm;
    
    }



}