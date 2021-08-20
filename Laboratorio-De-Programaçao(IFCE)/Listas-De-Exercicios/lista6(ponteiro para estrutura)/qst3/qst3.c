#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define MX 50
#define TAM 4

typedef struct node {
    int x;
    int y;
    float media;
}my_ts; //  IMPORTANTE => obs: my_ts = (struct node)

void Media(my_ts *);

int main(){
    int k;
    // my_ts v[TAM]; essa seria a maneira de fazer um vetor sem usar o ponteiro 
    my_ts *c = NULL;

    srand(time(NULL));
    
    c = (my_ts *) malloc(sizeof(my_ts)*TAM);

    if(c == NULL){
        printf("memoria insuficiente!!!");
        exit(1);
    }

    for(k=0;k<TAM;k++){
        (c+k)->x = rand()% MX;
        (c+k)->y = rand()% MX;
        Media(c+k);
    }

    for(k=0; k<TAM;k++){
        printf("\n-----------\n");
        printf("\nEstrutura[%d]",k);
        printf("\nx => %d",(c+k)->x);
        printf("\nY => %d",(c+k)->y);
        printf("\nMedia => %.2f",(c+k)->media);
    }


    return 0;
}

void Media(my_ts *p){
    p->media = (p->x + p->y) / 2.0;
}