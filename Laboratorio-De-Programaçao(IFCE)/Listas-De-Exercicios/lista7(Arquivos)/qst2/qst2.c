#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct ferramenta{
    int registro;
    int quantidade;
    int custo;
    char nomeFer[30];

}Ferramenta;

int main(){
    FILE *fp;

    Ferramenta v[TAM];

    if(!(fp = fopen("LOJA.txt","w+"))){
        perror(NULL);
        exit(1);
    }

    for(int k=0;k<TAM;k++){
        v[k].registro = k;
        v[k].quantidade = v[k].custo = 0;
        v[k].nomeFer[0] = '\0';
    }

    for(int k =0 ;k<TAM;k++){
        fprintf(fp,"Registro:%d\n",v[k].registro);
        fprintf(fp,"-----------\n");
        fprintf(fp,"Quantidade:%d\n",v[k].quantidade);
        fprintf(fp,"Custo:%d\n",v[k].custo);
        fprintf(fp,"Nome Ferramenta:%s\n",v[k].nomeFer);
        fprintf(fp,"------------\n");
    }

    return 0;
}