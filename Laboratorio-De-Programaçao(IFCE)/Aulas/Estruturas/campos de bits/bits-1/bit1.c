#include <stdio.h>

struct campoBits{
    unsigned id_setor : 4; // reservando 4 byts para id_setor , ou seja, de (0 ate 15)
    unsigned e1 : 1; // reservando 1 byt para e1, ou seja (0 ou 1)
    unsigned e2 : 1; // "                  "
    unsigned e3 : 1;
    unsigned e4 : 1;
};

int main(){
    struct campoBits cb;

    cb.id_setor = 15;
    cb.e1 = 1;
    cb.e2 = 0;

    printf("%d\n",cb.id_setor);
    printf("%d\n",cb.e1);
    printf("%d\n",cb.e1);

    printf("sizeof : %ld\n",sizeof(struct campoBits));

    return 0;

}