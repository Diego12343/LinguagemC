#include <stdio.h>

int main() {
    int distancia, tempo, resultado;

    printf("Entre com a distâcia percorrida: ");
    scanf("%d", &distancia);

    printf ("Entre com o tempo gasto: ");
    scanf("%d", &tempo);

    resultado = distancia / tempo;

    printf("\nA velocidade média foi é %d\n",resultado);
    return 0;

}
