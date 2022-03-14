/*Programa para calcular o desconto de
um funcionário. Onde o salário sendo
maior que 5000.00, terá um desconto de
5%. Caso contrário não haverá desconto
*/
#include <stdio.h>

#define LIMITE 5000.00

int main(){
    float salarioFuncionario;
    printf("Digite o salário do funcionário e tecle Enter\n");
    scanf("%f",&salarioFuncionario);
    if(salarioFuncionario > LIMITE){
        printf("O desconto será de %.2f\n", (salarioFuncionario*0.05) );
        printf("O valor final é %.2f\n",salarioFuncionario - (salarioFuncionario*0.05));
    }
    else{
        printf("Não há desconto");
    }
    return 0;
}