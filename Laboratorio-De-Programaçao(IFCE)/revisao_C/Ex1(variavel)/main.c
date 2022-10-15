#include <stdio.h>

float pi = 3.1416; // variavel global

void teste() // funçao sem passar parametro
{
    printf("pi vale: %f\n",pi);
}

void teste2(int x){  // funçao passando parametro 
    printf("valor: %d",x);
}

int main(void){
    
    int a = 100;

    printf("valor da variavel A: %d\n",a);
    teste();
    teste2(a);

    return 0;
}