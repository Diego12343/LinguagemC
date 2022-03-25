/*
Programa para ler entrada de texto
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
 char produto [30];
 printf("Informe o nome do produto");
 scanf("%s", &produto);

 printf("Produto: %s \n", produto);
}