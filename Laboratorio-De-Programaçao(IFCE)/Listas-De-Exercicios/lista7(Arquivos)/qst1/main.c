#include <stdio.h>
#include<stdlib.h>

#define TAM 80

int main(){
    FILE *fp;
    char nome[TAM];
    int idade;

   if(!(fp = fopen("fprintf.txt","w"))){
        perror("Erro:");
        exit(1);
    }

    puts("Digite Seu Mome:");
    fgets(nome,TAM-1,stdin);
    puts("Digite Sua Idade:");
    fscanf(stdin,"%d",&idade);

    fprintf(fp,"%s Tem %d Anos\n",nome,idade);

    fclose(fp);

    return 0;
}