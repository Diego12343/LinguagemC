#include <stdio.h>

int main(){

    float preco, taxa, desconto, preco_final;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a taxa de desconto: ");
    scanf("%f",&taxa);

    /*O vendedor irá entrar com o valor da taxa e em seguida
    nosso programa divide por 100 para obter o valor em
    percentual. Sendo assim, quando o vendedor digitar 5,
    o programa vai calcular e teremos o resultado 0,05 que
    representa 5%*/
    taxa = taxa/ 100;

    desconto = preco * taxa;

    preco_final = preco - desconto;

    printf("O valor do desconto é %f e o valor final é porcentagem %f",desconto,preco_final);

    return 0;
}