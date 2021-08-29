#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    FILE *fp;
    char ch;

    if (argc != 2){
        printf("formato: <nomeArquivo>\n",argv[0]);
        exit(1);
    }

    //fp = fopen(argv[1],"w");
    //if (fp == NULL){
    if(!(fp = fopen(argv[1],"w"))){
        puts("Erro: arquivo nao pode ser aberto");
        exit(1);
    }

    printf("DIGITE OS DADOS:\n'$' PRA PARAR!\n");
    do{
        ch = getchar();
        putc(ch, fp);

    }while(ch != '$');

    fclose(fp);

    return 0;
}