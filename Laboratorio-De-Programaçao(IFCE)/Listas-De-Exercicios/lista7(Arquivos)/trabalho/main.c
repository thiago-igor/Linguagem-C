#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct ferramenta{
    int registro;
    int quantidade;
    int custo;
    char nomeFer[30];

}Ferramenta;


void criar(Ferramenta *, int);
int menu(int, int );
void listar(Ferramenta *, int);

int main(){
int reg=0, op;
char *nomeArquivo = {"hardware.dat"};
Ferramenta v[TAM];

    puts("\n\tINVENTARIO DE FERRAMENTAS\n\t");

    criar(v, TAM);

    op = menu(reg,op);
    if(op==1){
        listar(v,TAM);
    }

    return 0;
}

int menu(int reg, int op){
    do{
        puts("\nDigite O Registro De [0 - 99]");
        scanf("%d",&reg);
        if(0<=reg && reg<=99){        
        puts("Para:");
        puts("Listar:    [1]");
        puts("Inserir:   [2]");
        puts("Atualizar: [3]");
        puts("Remover:   [4]");
        puts("Sair       [5]");
        printf("Digite A Opcao Desejada:");
        scanf("%d",&op);
        }
        else{
            puts("Opcao invalida!");
            puts("Tente novamente:");
        }
    }while(reg>99 || reg<0);

    return op;
}

void criar(Ferramenta *f, int tamanho){
   FILE *fp;

    Ferramenta v[tamanho];

    if(!(fp = fopen("hardware.dat","w+"))){
        perror(NULL);
        exit(1);
    }

    for(int k=0;k<TAM;k++){
        v[k].registro = k;
        v[k].quantidade = v[k].custo = 0;
        v[k].nomeFer[0] = '\0';
    }

}

void listar(Ferramenta *p, int tamanho){
    FILE *fp;

    if(!(fp= fopen("hardware.dat", "w+"))){
        printf("erro ao criar");
        exit(1);
    }

    Ferramenta v[tamanho];

    for(int k =0 ;k<TAM;k++){
        fprintf(fp,"Registro:%d\n",v[k].registro);
        fprintf(fp,"-----------\n");
        fprintf(fp,"Quantidade:%d\n",v[k].quantidade);
        fprintf(fp,"Custo:%d\n",v[k].custo);
        fprintf(fp,"Nome Ferramenta:%s\n",v[k].nomeFer);
        fprintf(fp,"------------\n");
    }


}



