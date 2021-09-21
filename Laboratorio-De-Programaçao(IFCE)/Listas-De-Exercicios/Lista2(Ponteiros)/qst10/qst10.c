/*Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X.*/

/* o vetor f[TAM] e preenxido assim: f[0] = quantos zeros tem no vetor x[NUM], f[1] = quantos 1 tem no vetor x[NUM]... assim ate acabar o vetor f[TAM], ou seja, percorremos o vetor x[NUM] para achar o vetor f[TAM]*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 7
#define NUM 10
#define linha "\n--------------------\n"

int main(void) {
  
  int x[NUM], f[TAM], *pont=NULL;
  srand(time(NULL));

  for(int i=0;i<NUM;i++){
    x[i] = rand()% (TAM); // preenxendo vetor x[]
  }

  pont = x;
  printf(linha);
  printf("vetor X[%d]\n",NUM);
  for(int i=0;i<NUM;i++){
    printf("%d,",x[i]); // lendo vetor x[]
  }
  printf(linha);

  int s,*p2;
  p2 = f; // ponteiro p2 e usado, porem nao seria necessario

  for(int k=0;k<TAM;k++){
    pont = &x[0]; // o ponteiro pont volta a apontar para o endereço de memoria inicial do vetor x[]

    s=0; // zera meu contador

    for(int i=0;i<NUM;i++){
      if(k==*pont){ // analiza se k == x[NUM]
        s++; // conta quantas vezes ocorre
      }
      *(p2+k) = s; // = f[k] = s; 
      pont++; // pula para o proximo endereço de memoria 
    }
  }

  printf("\n");

  printf(linha);
  printf("vetor F[%d]\n",TAM);
  for(int i=0;i<TAM;i++){ //imprime o vetor f[TAM]
    printf("%d,",*(p2+i)); // *(p2+i) = f[i]
  }
  printf(linha);

  return 0;
}
