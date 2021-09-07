#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char c;

    if(fp = fopen("arquivo.txt","w")){
        perror(NULL); // perror fala o reeo ocorrido
    }

    c = fgetc(fp);

    //clearerr(fp); (limpa o indicador de erro)

    if(ferror(fp)){ // ferror: remete se o que foi escrito acima possue erro
        fprintf(stderr,"erro ao ler o arquivo"); //stdeer: remete o fprintf quando estamos buscando erro.
        exit(2);
    }

    fclose(fp);

    return 0;
}