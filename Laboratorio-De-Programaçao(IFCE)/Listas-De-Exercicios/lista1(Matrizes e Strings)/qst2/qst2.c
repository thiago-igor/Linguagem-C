// fazer programa que preenxa um vetor de 15 elementoscom float e diga qual o maior e menor termo do vetor.

#include <stdio.h>
#include <stdlib.h> // funçao rand() e srand() para lançar os numeros no vetor 
#include<time.h>
#define TAM 15

int main(void) {
  int i;
  float s,menor, maior, vetor[TAM];

  srand(time(NULL)); // mudando a semente do rand() para assim gerar numeros "aleatorios"

  for(i=0;i<=TAM;i++){   // preenxer o vetor com a funçao rand()
    vetor[i] = rand()%30;
  }

  for(i=0;i<TAM;i++){ // verificar quem e o maior e o menor termo do vetor
    printf("%f / 3\n",vetor[i]);
    vetor[i]= vetor[i]/3; // transforma os numeros do vetor em float, dividindo eles por rand()%10
    

    if(i==0){
      maior = vetor[i];
      menor = vetor[i];
    }
    else if(vetor[i] > maior){
      maior = vetor[i];
    }
    else if (vetor[i] < menor){
      menor = vetor[i];
    }
  }

  for(i=0;i<TAM;i++){  // lendo os numeros do vetor 
    printf(" %.2f,",vetor[i]);
  }

  printf("\no maior numero foi %.2f",maior);
  printf("\no menor numero foi %.2f",menor);
  return 0;
}