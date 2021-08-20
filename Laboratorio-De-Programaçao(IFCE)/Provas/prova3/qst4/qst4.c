#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define MX 50

typedef struct node {
    int x;
    struct node *prox;
}my_ts;

void proximo(my_ts *);

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
    }

    for (int k=0; k<TAM; k++){
    if (k == TAM-1){
      (c+k)->prox = NULL;
     printf("Fim do Codigo");
      //exit(2);
    }else{
      (c+k)->prox = (c+k+1);
      //proximo(c);
    }
  }

  //for(k=0;k<TAM;k++){
     // printf("\n----------------------------------\n");
     // printf("\nplano [%d]:",k);
     // printf("\nX => %d / X Prox => %d",(c+k)->x,(c+k)->prox->x);
//  }
  proximo(c);


    return 0;
}

void proximo(my_ts *p){
  int i;
  for(i=0;i<TAM;i++){
      printf("\n----------------------------------\n");
      printf("\nplano [%d]:",i);
      printf("\nX => %d / X Prox => %d",(p+i)->x,(p+i)->prox->x);
  }

}
