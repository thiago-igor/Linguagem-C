#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define MX 100

struct node{  // tipos de dados
    int x;
    int y;
};

int main(){

    struct node ns[TAM]; // declaraçao da variavel vetor ns[TAM]
    int k;

    srand(time(NULL));

    for(k=0;k<TAM;k++){
        ns[k].x = rand() % MX;
        ns[k].y = rand() % MX;
    }

    
    for(k=0;k<TAM;k++){
        printf("x => %d\n",ns[k].x);
        printf("y => %d\n",ns[k].y);
        printf("-------\n");
    }



    return 0;
}

