/*Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o
nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um
elemento inteiro para identificar o n ́umero do pedido.*/
#include <stdio.h>

struct estoque {
    char nome_peca[30]; // nome da peça
    int numero_peca; // numero da peça
    float preco;
    int pedido;
};

int main(){
    struct estoque a;

    printf("Nome da peca:");
    scanf("%s",&a.nome_peca);

    printf("Numero da peca:");
    scanf("%d",&a.numero_peca);

    printf("Preco:");
    scanf("%f",&a.preco);

    printf("Numero do pedido:");
    scanf("%d",&a.pedido);

    printf("\n---------- Informacoes Do Pedido ----------\n");

    printf("Nome Da Peca => %s\n",a.nome_peca);
    printf("Numero Da Peca => %d\n",a.numero_peca);
    printf("Preco => %.2f\n",a.preco);
    printf("Numero Do Pedido => %d\n", a.pedido);



    return 0;
}