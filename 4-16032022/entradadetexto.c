/*
Programa pede ao usuário que digite 
o seu nome. Ao fazer será alocado
na variável nome
*/
#include <stdio.h>

int main(){
    
    char nome[30];

    printf("Digite o seu nome e tecle Enter:\n");
    scanf("%s",nome);//Quando é preciso uusar mais de um caracter
    printf("%s\n",nome);

    return 0;
}