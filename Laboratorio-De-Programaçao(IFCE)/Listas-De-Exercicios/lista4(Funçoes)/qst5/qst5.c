/*Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente.
A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a fun ̧c ̃ao rand()
para alimentar o vetor com valores pseudo-aleat ́orios.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10


void preencher(int *, int );
void ler(int *, int );
int soma(int * ,int );

int main(int argc, char * argv[]){

    int tam, *p = NULL;
    int res;

    if(argc !=2){
        printf("formato incorreto <tamanho do vetor>");
        exit(1);
    }
    tam = atoi(argv[1]);

    p = (int *) malloc(tam * sizeof(int));

    if(p == NULL){
        printf("memoria insuficiente!!!");
        exit(2);
    }

    preencher(p,tam);

    printf("vetro =>");
    ler(p,tam);

    res = soma(p,tam);

    printf("\nsoma dos elementos e => %d\n",res);

    return 0;
}

void preencher(int *p,int t){ // funçao para preencher o vetor
    int k;
    srand(time(NULL));

    for(k=0;k<t;k++){ 
        *(p+k) = rand() % MX;
    }
}

void ler(int *p, int t){
    int k;
    for(k=0;k<t;k++){
        printf("%d,",*(p+k));
    }
}

int soma(int *p ,int t){
    int k;
    int soma=0;

    for(k=0;k<t;k++){
        soma += *(p+k);
    }
    return soma;
}


