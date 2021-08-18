#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10


void preencher(int *, int );

int main(int argc, char * argv[]){

    int tam, *p = NULL;

    if(argc !=2){
        printf("formato incorreto <tamanho do vetor>");
        exit(1);
    }
    tam = atoi(argv[1]);

    p = (int *) malloc(tam * sizeof(int));

    if(p == NULL){
        printf("memoria insuficiente!!!");
        exit(2);

    preencher(p,tam)



    return 0;
}

void preencher(int *p,int t){ // funçao para preencher o vetor
    int k;
    srand(time(NULL));

    for(k=0;k<t;k++){ 
        *(p+k) = rand() % MX;
    }
}