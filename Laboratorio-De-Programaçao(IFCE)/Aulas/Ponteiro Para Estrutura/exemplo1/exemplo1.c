#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct UF{
    char codigo[3];
    char descricao[50];
};

struct cidade{
    char codigo[3];
    char descricao[50];
    struct UF uf;
};

void imprimir (struct cidade *c); // prototipo da funçao


int main(){
    struct cidade *cid = NULL;
    struct UF *uf = NULL;

     cid = (struct cidade *) malloc(sizeof(struct cidade));

     uf = (struct UF *) malloc(sizeof(struct UF));

     if(cid==0 || uf==0){  // validaçao de memoria
    printf("nao tem memoria suficiente");
    exit(1);
  }


    strcpy(uf->codigo, "CE");
    strcpy(uf->descricao, "Ceara");

    cid->uf = *uf;
    strcpy(cid->codigo,"FO");
    strcpy(cid->descricao,"Fortaleza");

    imprimir(cid);


    return 0;
}

void imprimir (struct cidade *c){
    printf("codigo => %s\n",c->codigo);
    printf("descricao => %s\n",c->descricao);
    printf("UF => codigo => %s\n",c->uf.codigo);
    printf("UF => descricao => %s\n",c->uf.descricao);

}