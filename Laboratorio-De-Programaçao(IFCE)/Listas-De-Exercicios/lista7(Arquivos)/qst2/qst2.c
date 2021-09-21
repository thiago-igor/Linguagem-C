/*Voce  ́e o dono de uma loja de materiais e precisa manter um invent ́ario que poder ́a informar quais
e quantas ferramentas vocˆe possui e o custo de cada uma. Escreva um programa que inicialiaze
o arquivo “hardware.dat” para 100 registros vazios, e permita que vocˆe insira os dados referentes
a cada ferramenta, lista todas as suas ferramentas, exclua um registro para a ferramenta que n ̃ao
possui mais e atualize qualquer informa ̧c ̃ao no arquivo. O n ́umero de identificaçao da ferramenta
devera ser o numero do registro.
Vocˆe deve armazenar em seu arquivo os seguintes campos.
# registro - Nome da ferramenta - Quantidade - Custo*/

// obs: salvar no arquivo em modo binario.
// exemplo incompleto e feito de forma sem ser binario!

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