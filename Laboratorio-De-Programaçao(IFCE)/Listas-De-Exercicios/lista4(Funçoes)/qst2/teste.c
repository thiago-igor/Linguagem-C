#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(int argc,char *argv[]){

    int *vet=NULL,num,menor;

    if (argc != 2){
        printf("formato incorreto. Tente novamente: <num1>"); // verificando formato
        exit(1);
    }

    num = atoi(argv[1]); // tamanho do vetor 

    vet = (int*) malloc (sizeof (int) * num); // verificando espaço do vetor

    if(!vet){
        printf("memoria inssuficiente. Tente novamente!");
        exit(2);
    }

    srand(time(NULL)); // deixando o vetor aleatorio

    for(int i=0;i<num;i++){ 
        vet[i] = rand() % TAM; // formando o vetor
    }

    menor = vet[0];
    printf("vetor=>\n");
    for(int i=0;i<num;i++){ // lendo o vetor
        printf("%d,",vet[i]);
        if(menor>vet[i]){
            menor = vet[i];
        }
    }

     printf("\nMenor Elemento Do Vetor => %d",menor);

    return 0;
}


