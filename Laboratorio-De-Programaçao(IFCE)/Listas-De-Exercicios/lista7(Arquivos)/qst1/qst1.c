/*Escreva um programa em C que leia dados de diferentes usu ́arios e grave em um arquivo csv.
Pesquise sobre a organiza ̧c ̃ao de um arquivo csv.*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 50

/*Escreva um programa em C que leia dados de diferentes usu ́arios e grave em um arquivo csv.
Pesquise sobre a organiza ̧c ̃ao de um arquivo csv.*/

int main(){
    FILE *fp;
    char nome[TAM];
    int idade;

    if(!(fp = fopen("fprintf.txt","w"))){
        perror("Erro :");
        exit(1);
    }
    int x;
    do{
        puts("digite seu nome: ");
        fscanf(stdin,"%s",nome);
        puts("digite sua idade: ");
        fscanf(stdin,"%d",&idade);
        fprintf(fp,"%s Tem Idade De %d Anos\n",nome,idade);
        puts("Digite -1 para pausar, ou 0 para continuar:");
        scanf("%d",&x);
        puts("=-=-=-=-=-=-=-=");
    }while(x!=-1);

    fclose(fp);

    return 0;
}