/*
Programa para exibir o salário do 
cargo de acordo com a escolha do 
usuário
*/
#include <stdio.h>

int main(){

    int opcao = 0;
    //comando para limpar a tela
    system("clear");//Clear screen(limpar tela)
    printf("#################################################");
    printf("\n#\t Programa para exibir salário\t\t\t#\n");
    printf("#################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("--------------------------------------------------\n");
  
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
  
             printf("O salário do Diretor é R$ 15.000,00");
        break;
        case 2:
             printf("O salário do Gerente é R$ 12.000,00");
        break;
        case 3:
             printf("O salário do Analista é R$ 8.000,00");
        break;
        case 4:
             printf("O salário do Assistente é R$ 4.000,00");
        break;
        case 5:
             printf("O salário do Auxiliar é R$ 2.000,00");
        break;

        default:
               printf("Não há salário");
               
        break;        

}
    return 0;
}    