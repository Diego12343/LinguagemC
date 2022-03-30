#include <stdio.h>
#include <stdlib.h>

int idade_pet;
int idade_dono;

typedef int idade, qtd;
typedef char nome[30];

idade pet;
idade dono;
nome pets;
nome donos;


idade x = 10;
idade y = 20;

typedef struct manipular_usuario{
    char nome[20];
    char senha[10];
    char nivel[20];
}user;


void main(){

    int rs = 0;
    rs = x + y;
    printf("%d",rs);

    struct manipular_usuario us1;
    struct manipular_usuario *pUs1;

    user us2;
    user *pUs2;
    pUs2 = &us2;
    pUs2->nome;
  


}