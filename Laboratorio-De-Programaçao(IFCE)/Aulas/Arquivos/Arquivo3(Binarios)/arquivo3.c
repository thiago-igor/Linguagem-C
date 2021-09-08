#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp;
    double d = 7.35, dr;
    int i = 10, ir;

    if(argc != 2){ // validaçao da entrada
        printf("formato:  <Nome Do Arquivo>\n");
        exit(1);
    }

    if(!(fp = fopen(argv[1],"w+b"))){ // validaçao de abertura do arquivo / w = escrever , b = binario
        printf("Erro!!");
        exit(2);
    }

    // ESCRITA
   if(fwrite(&d, sizeof(double), 1, fp) !=1){
       printf("Erro Em Escrever No Arquivo");
       exit(3);
   }

    //ESCRITA
    if (fwrite(&i, sizeof(int),1,fp) != 1){
        printf("Erro Em Escrever No Arquivo");
        exit(4);
    }

    //REPOSICINAMENTO DE FP
    rewind(fp);

    //LEITURA
    if(fread(&dr, sizeof(double),1,fp) != 1){
        printf("Erro Na Leitura Do Arquivo");
        exit(5);
    }

    //LEITURA
    if(fread(&ir, sizeof(int),1,fp) != 1){
        printf("Erro Na Leitura Do Arquivo");
        exit(6);
    }

    //IMPRIMIR ARQUIVOS LIDOS
    printf("%lf -- %d \n", dr, ir);

    printf("%lu---%lu ", sizeof(double), sizeof(int));

    //FECHAR ARQUIVO
    fclose(fp);

    return 0;

}