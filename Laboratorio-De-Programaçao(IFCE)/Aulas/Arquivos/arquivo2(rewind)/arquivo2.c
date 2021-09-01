#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){
    FILE *fp;
    char str[80];

    if (argc != 2){
        printf("formato: <nomeArquivo>\n");
        exit(1);
    }

    //fp = fopen(argv[1],"w");
    //if (fp == NULL){
        //ABERTURA DO ARQUIVO
    if(!(fp = fopen(argv[1],"w+"))){
        puts("Erro: arquivo nao pode ser aberto");
        exit(1);
    }

    //ESCRITA DE DADOS NO ARQUIVO
    do{
        puts("digite uma string:\n");
        fgets(str,79,stdin);
        //strcat(str,"\n");
        fputs(str,fp);

    }while(*str != '\n');

    // REPOSICIONAR O INDICADOR DE ARQUIVO PARA O INICIO:
    rewind(fp);

    //LEITURA DOS DADOS DO ARQUIVO:
    printf("\n\n -- Dados Do Arquivo--\n");
    while(!feof(fp)){
        fgets(str,79,fp);
        printf("%s",str);
    }

    //FECHAR ARQUIVO:
    fclose(fp);

    return 0;
}