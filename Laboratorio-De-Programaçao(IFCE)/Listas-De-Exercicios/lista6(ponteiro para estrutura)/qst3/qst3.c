#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 3
#define MX 100

struct Node{
    int x;
    int y;
    float media;
};

void media(struct Node *);

int main(){
    // struct node v[TAM];
    struct Node *pv = NULL;
    int k;

    srand(time(NULL));

    pv = (struct Node *) malloc(sizeof(struct Node));

    for(k=0;k<TAM;k++){
        (pv+k)->x = rand() % MX;
        (pv+k)->y = rand() % MX;
        media(pv+k);
    }

    

    for(k=0; k<TAM;k++){
        printf("estrutura [%d]:\n",k);
        printf("x: %d\n",(pv+k)->x);
        printf("y: %d\n",(pv+k)->y);
        printf("media => %.2f\n",(pv+k)->media);
    }
    
    
    

    return 0;
}

void media(struct Node *p){
    p->media = (p->x + p->y)/2.0;
}