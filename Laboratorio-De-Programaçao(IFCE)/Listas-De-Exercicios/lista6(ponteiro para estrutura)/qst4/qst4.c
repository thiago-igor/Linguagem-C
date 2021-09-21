/*Modifique Node para que a tenha um elemento ponteiro prox do tipo struct node. Esse ponteiro
deve apontar para um pr ́oximo node do vetor, sendo que o  ́ultimo deve apontar para o primeiro.
Imprima a m ́edia do node atual e do seguinte.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define MX 50;

typedef struct node {
    int x;
    int y;
    float media;
    struct node *prox;
}my_ts;

void Media(my_ts *);

int main(){
    int k;
    my_ts *c = NULL;

    srand(time(NULL));

    c = (my_ts *) malloc(sizeof(my_ts)*TAM);

    if(c == NULL){
        printf("memoria insuficiente!!!");
        exit(1);
    }

    for(k=0;k<TAM;k++){
        (c+k)->x = rand() % MX;
        (c+k)->y = rand() % MX;
        Media(c+k);
    }


    for (int k=0; k<TAM; k++){
    if (k == TAM-1){
      (c+k)->prox = c;
    }else{
      (c+k)->prox = (c+k+1);
    }
  }

  for(k=0;k<TAM;k++){
      printf("\n----------------------------------\n");
      printf("\nplano [%d]:",k);
      printf("\nX => %d",(c+k)->x);
      printf("\nY => %d",(c+k)->y);
      printf("\nMedia => %.2f / Media Prox => %.2f",(c+k)->media,(c+k)->prox->media);

  }

    return 0;
}

void Media(my_ts *p){
    p->media = (p->x + p->y) / 2.0;
}
