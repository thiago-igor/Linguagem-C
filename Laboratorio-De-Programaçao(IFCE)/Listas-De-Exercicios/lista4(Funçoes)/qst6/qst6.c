/*Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros
gerados aleatoriamente em tempo de execuçao.*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

void preencher(int *,int );
void ler(int *, int );
void Media (int *, int , float * );
void Moda(int *, int , int *);


int main(int argc , char * argv[]){
    int tam, *p = NULL;
    float media, mediana;
    int moda;

    if(argc!=2){
        printf("formato <tamanho do vetor>");
        exit(1);
    }
    tam = atoi(argv[1]);

    p = (int *) malloc(tam * sizeof(int));

    if(p == NULL){
        printf("memoria insuficiente!!!");
        exit(2);
    }

    preencher(p,tam);

    printf("vetor =>");
    ler(p,tam);

    Media(p,tam,&media);

    printf("\n Media => [%.2f]\n",media);

     Moda(p,tam,&moda);

     printf("\nmoda => [%d]",moda);
    
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

void Media (int *p, int t, float *pm ){
    int k;
    int soma=0;
    for(k=0;k<t;k++){
        soma += *(p+k);
    }
    printf("\nsoma=>%d\n",soma);
    *pm =  (float) soma / t;

}

void Moda(int *p, int t, int *pm){
    int k,j;
    int cont[t];
    int conta=0;
    for(k=0;k<t;k++){
        for(j=0;j<t;j++){
            if(*(p+k) == *(p+j)){
                cont[k]++;
                if(cont[k]>conta){
                    conta = cont[k];
                    *pm = *(p+k);
                }
            }

        }
        cont[k]=0;
    }
}