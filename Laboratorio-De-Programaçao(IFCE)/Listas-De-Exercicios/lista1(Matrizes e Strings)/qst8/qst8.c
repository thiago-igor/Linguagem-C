//Faça um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleat ́orios no intervalo
//[0, 19] e apresente a sua media aritmetica e geometrica.

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define TAM 3

int main(void) {

  int s,i, vetor[TAM]; // s=soma m=multiplicaçao ma= media aritimetica mg = media geometrica
  float ma,mg,m;
  

  srand(time(NULL));

  for(i=0;i<TAM;i++){
    vetor[i] = rand() % 20;
  }
  
  printf("numeros aleatorios:\n");
  for(i=0;i<TAM;i++){
  printf("(%d)",vetor[i]);
  }

  s=0;
  for(i=0;i<TAM;i++){
    s+=vetor[i];
  }

  m=1;
  for(i=0;i<TAM;i++){
    m= m*vetor[i];
  }


  ma = (float)s/TAM;
  mg = pow(m,1.0/TAM);

  printf("\nMedi Aritimrtica =>%.2f",ma);
  printf("\nMedi Geometrica =>%.2f",mg);
  
  return 0;
}