// media pedida na questao => (tamanho do vet - menor numero) / (maior numero - menor numero)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

void preencher(int *,int );  // escorpo da funçao
void ler(int *, int );
void maior_vet(int *, int ,int *);
void menor_vet(int *, int , int *);
float media(int , int * , int *);

int main(int argc, char * argv[]){ // usa argc e argv para saber o tamanho do vetor
    int tam, *p;
    int menor;
    int maior;
    float res;

    if (argc != 2){ // validando o argc
        printf("formato correto <Tamanho Do Vetor>");
        exit(1);
    }

    tam = atoi(argv[1]); // transformando em inteiro 

    p = (int *) malloc(tam * sizeof(int)); // reservando espaço para o vetor 

    preencher(p,tam);

    printf("vetor =>");
    ler(p,tam);   

    maior_vet(p,tam,&maior);

    menor_vet(p,tam,&menor);

    printf("\nMaior Numero Do Vetor => %d",maior);
    printf("\nMenor Numero Do Vetor => %d",menor);

    res = media(tam,&menor,&maior);

    printf("\nMedia => %.2f",res);



    return 0;
}

void preencher(int *p,int t){ // funçao para preencher o vetor
    int k;
    srand(time(NULL));

    for(k=0;k<t;k++){ 
        *(p+k) = rand() % MX;
    }
}

void ler(int *p, int t){ // funçao para ler o vetor
    int k;
    for(k=0;k<t;k++){
        printf("%d,",*(p+k));
    }
}

void maior_vet(int *p, int t,int *pm){ // funçao para achar o maior numero do vetor
    int k;
    *pm = *p;
    for(k=1;k<t;k++){
        if(*pm < *(p+k)){
            *pm = *(p+k);
        }
    }

}

void menor_vet(int *p, int t, int *pm){ // funçao para achar o menor numero do vetor
    int k;
    *pm = *p;
    for(k=1;k<t;k++){
        if(*pm > *(p+k)){
            *pm = *(p+k);
        }
    }
}

float media(int t, int *min, int *max){ // funçao para achar a media pedida na questao (obs: essa funçao depende das outras a cima)
    float media;
    media = (float) (t - *min) / (*max-*min);

    return media;
}