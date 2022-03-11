//Programa p/ calcular area, dado o raio
#include <stdio.h>// biblioteca standard de Input/Output
#define PI 3.14159// constante pi
//aseguir a funcao main
int main()
{
    float raio, area;//duas vars. declaradas
    //mostra na tela uma mensagem com printf
    printf("Digite o valor deo raio do circuito, e ENTER\n");
    //le do teclado scanf; note o & em &raio
    scanf("%f", &raio);//exemplos: 1.23 12.3e-1
    //a seguir mostra na tela o valor do raio lido
    //usando 12 colunas, e 2 decimais arredondados
    //por ex. 1.576 e' arredondando para 1.58,so' na tela
    printf("Raio digitado e' %12.2f\n",raio);
    area=PI *raio* raio;
    printf("Area do circulo com raio %f e' %f\n",raio,area);
    return 0;
}
    //fim main
