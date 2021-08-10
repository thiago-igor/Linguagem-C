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