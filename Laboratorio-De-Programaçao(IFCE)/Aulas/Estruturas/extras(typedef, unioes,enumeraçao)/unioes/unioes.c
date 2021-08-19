#include <stdio.h>

union numero{
    int x;
    unsigned char y;
};

int main(){
    union numero valor;

    valor.x = 255;

    printf("%d, %d\n",valor.x,valor.y);

    return 0;
}
