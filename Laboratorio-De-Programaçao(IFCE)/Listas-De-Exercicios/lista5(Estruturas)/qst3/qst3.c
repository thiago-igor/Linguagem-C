#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

struct dados{
    int *v;// ponteiro para o vetor
    unsigned int num;
    float media;

};

int main(int argc, char * argv []){
    struct dados x;
    // obs: todas as variaveis vem acompanhadas de x. por conta do struct e o "x" declarado
    int i;
    int *pv=NULL;
    unsigned tam;

    //int i, med,num,*v=NULL;

    if(argc!=2){
        printf("formato correto: <num>"); // verificando formato exigido 
        exit(1);
    }

    tam = atoi(argv[1]); // transformando de char para int

    pv = malloc(sizeof(int)*tam); // alocando espaço para o vetor

    if(!pv){  // quando nao tem memoria suficiente v recebe NULL, logo se v == NULL ele faz o if  
    printf("nao tem memoria suficiente");
    exit(2);
    }

    srand(time(NULL));
    
    x.v = pv;
    x.num = tam;
    x.media = 0;

    for(i=0;i<x.num;i++){
        x.v[i] = rand()%TAM;
        x.media += x.v[i]; 
    }

    printf("Vetor Gerado:\n");
    for(i=0;i<x.num;i++){
        printf("%d,",x.v[i]);
    }

    printf("\nMedia da soma dos numeros =>%.2f\n",x.media/x.num);


    return 0;
}