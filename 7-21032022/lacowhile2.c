/*
Programa para manter a tela sempre ativa. Caso
o usuário digite 9, então a tela será liberada
*/
#include <stdio.h>

int main(){
    int op =0;
    printf("Digite um número para sair e tecle Enter\n");
    scanf("%d",&op);
    while(op !=9){
        system("clear");
        printf("\n Você errou ....... !!! :p\n ");

       printf("Tente outra vez e tcle Enter\n");
       scanf("%d",&op); 
    }
    return 0;
}