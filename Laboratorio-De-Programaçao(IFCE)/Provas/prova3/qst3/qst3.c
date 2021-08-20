#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 5
#define MX 50

typedef struct pm{
  int x;
  int y;
  int dist;
}my_ts;

void endereco(my_ts *);

int main(void) {
  my_ts *c;
  int k;

  srand(time(NULL));

    c = (my_ts *) malloc(sizeof(my_ts)*TAM);

    if(c == NULL){
        printf("memoria insuficiente!!!");
        exit(1);
    }

  for(k=0;k<TAM;k++){
        (c+k)->x = rand() % MX;
        (c+k)->y = rand() % MX;
        (c+k)->dist = (c+k)->x - (c+k)->y; 
    }

    endereco(c);

  return 0;
}

void endereco(my_ts *p){
  int k;
  int end;
  int distancia = 100;
  for(k=0;k<TAM;k++){
    if((p+k)->dist < distancia){
      distancia = (p+k)->dist;
      end = k;
    }
    printf("\nX = %d",(p+k)->x);
    printf("\ny = %d",(p+k)->y);
    printf("\ndistancia => %d",(p+k)->dist);
    printf("\nEndereço dis => [%p]",&(p+k)->dist);
  }


  printf("\nMenor distancia => %d / Endereco[%p]\n",distancia,&(p+end)->dist);

   
    
}