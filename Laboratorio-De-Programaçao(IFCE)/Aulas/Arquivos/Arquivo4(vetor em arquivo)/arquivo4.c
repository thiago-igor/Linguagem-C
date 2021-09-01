#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3
#define MX 100


struct coord{
    int x;
    int y;
};
void escreverArquivo(struct coord *, int , char *);
unsigned lerArquivo(struct coord *, char *);
void exibirDados(struct coord *, int);

int main(int argc, char * argv[]){

    if(argc != 2){ // validaçao da entrada
        printf("formato:  <Nome Do Arquivo>\n");
        exit(1);
    }

    struct coord vetorcoord[TAM];
    struct coord vetorcoordRecuperado[TAM];
    unsigned qntlidos;

    srand(time(NULL));

    //preencher dados:
    for(int k =0;k<TAM;k++){
        vetorcoord[k].x = rand() % MX;
        vetorcoord[k].y = rand() % MX; 
    }

    exibirDados(vetorcoord,TAM);

    escreverArquivo(vetorcoord,TAM,argv[1]);

    qntlidos = lerArquivo(vetorcoordRecuperado, argv[1]);

    printf("\n-----dados lidos: %u\n",qntlidos);

    exibirDados(vetorcoordRecuperado,qntlidos);

    return 0;
}


void escreverArquivo(struct coord *p, int tamanho, char *nomeArquivo){
    FILE *fp;

    if(!(fp= fopen(nomeArquivo, "wb"))){
        printf("erro ao escrever no arquivo: %s",nomeArquivo);
        exit(1);
    }

    for(int k=0;k<tamanho;k++){
        fwrite(p+k, sizeof(struct coord),1,fp);
    }

    fclose(fp);
}

unsigned lerArquivo(struct coord *p, char *nomeArquivo){
    FILE *fp;
    struct coord c;
    size_t qnt;

    if(!(fp= fopen(nomeArquivo, "rb"))){
        printf("erro ao escrever no arquivo: %s",nomeArquivo);
        exit(1);
    }

    int k=0;
    while(1){
        qnt = fread(&c, sizeof(struct coord), 1, fp);
        if (qnt<1) break;

        *(p+k) = c;
        k++;
    }

    fclose(fp);

    return k;
}

void exibirDados(struct coord *p, int tamanho){
    for(int k=0; k<tamanho;k++){
        printf("indice: %d\n",k);
        printf("X: %d -- Y: %d\n",(p+k)->x,(p+k)->y);
        printf("-----------\n");
    }
}