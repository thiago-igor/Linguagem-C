#include <stdio.h>

struct dados
{
    int x;
    int y;
    char c;
    char str[10];
};

int main(){
    struct dados p = {2,10,'a',"oi"};

    printf("%d, %d, %c, %s",p.x,p.y,p.c,p.str);


    return 0;
}