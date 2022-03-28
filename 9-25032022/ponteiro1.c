 /*
 Programa para estudar um pouco sobre ponteiro.
 Este será o nosso primeiro exemplo
 */
#include <stdio.h>
#include <stdlib.h>
void main(){

     int valor =50;
     int *pvalor = &valor;
     printf("%d é o valor e a posição em memória é %p\n", valor,pvalor);
}