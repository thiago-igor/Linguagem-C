#include <stdio.h>
#include<stdlib.h>
#include "operacoes.h"
#include "util.h"   

int main(int argc, char * argv[]){

int op,a,b;

if(argc!=3){
    puts("formato incorreto <num1> <num2>");
    exit(1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);

imprimirMenu();
scanf("%d",&op);

switch (op){
    case 1:
        printf("%d + %d = %d",a,b,somar(a,b));
    break;

    case 2:
        printf("%d - %d = %d",a,b,subtrair(a,b));
    break;

    case 3:
        printf("%d * %d = %d",a,b,multiplicar(a,b));
    break;

    case 4:
        printf("%d / %d = %f",a,b,divisao(a,b));
    break;

    default:
        puts("operacao invalida");
    break;

}

    return 0;
}




