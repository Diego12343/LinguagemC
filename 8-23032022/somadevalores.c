/*
Programa para somar os valores
*/

#include <stdio.h>
#include <stdlib.h>
void main() {
    int soma, num1, num2;
    printf("Informe o primeiro numero:");
    scanf("%d", &num1);
    printf("Informe o segundo numero:");
    scanf("%d", &num2);


    soma = num1 + num2;

    printf("Resultado da soma: %d", soma);

    
}