#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define TAM 3
#define MX 100

struct coord{
    int x;
    int y;
};

void preencher(struct coord * , int);
void exibir(struct coord *, int );
void escreverArquivo(struct coord *, int ,char *);
unsigned lerArquivo(struct coord *, char *);

int main(int argc, char * argv[]){

    if(argc != 2){ // validaçao da entrada
        printf("formato:  <Nome Do Arquivo>\n");
        exit(1);
    }

    struct coord v[TAM];
    struct coord vrecuperado[TAM];
    unsigned qnt_lidos;

    preencher(v,TAM);
    exibir(v,TAM);
    escreverArquivo(vrecuperado,TAM,argv[1]);
    qnt_lidos = lerArquivo(vrecuperado, argv[1]);

    printf("\n-----dados lidos: %u\n",qnt_lidos);
    exibir(vrecuperado,qnt_lidos);

    
    return 0;
}

void preencher(struct coord *p , int tamanho){
    srand(time(NULL));
    for(int k=0; k<tamanho;k++){
        (p+k)->x = rand()%MX;
        (p+k)->y = rand()%MX; 
    }
}

void exibir(struct coord *p, int tamanho){
    for(int k=0;k<tamanho;k++){
        printf("Indice %d\n",k);
        printf("x: %d --- y: %d",(p+k)->x,(p+k)->y);
        puts("\n-------------");
    }
}

void escreverArquivo(struct coord *p, int tamanho,char *nomeArquio){
    FILE *fp;

    if(!(fp = fopen(nomeArquio,"wb"))){
        perror(NULL);
        exit(1);
    }

    for(int k=0;k<tamanho;k++){
        fwrite(p+k,sizeof(struct coord),1,fp);

    }

    fclose(fp);
}

unsigned lerArquivo(struct coord *p, char *nomeArquivo){
    FILE *fp;
    struct coord c;
    size_t qnt;

    if(!(fp = fopen(nomeArquivo,"rb"))){
        perror(NULL);
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


