/*
Programa para calcular os anos bisextos

*/
#include <stdio.h>
int main(){

    int qtd = 0;
    int ano;

    for(ano = 1950 ; ano <= 2022 ; ano++){
       if( ano % 4 == 0){
           printf("%d é bissexto\n",ano);
           qtd++;
       }
    }
    printf("Encontramos %d anos bissexto",qtd);
    return 0;
}    