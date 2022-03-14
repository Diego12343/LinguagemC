/*Programa para calcular o resultado
da situação do aluno se está aprovado
ou reprovado. Vamos levar em consideração
a nota do aluno e compará-la a média de
aprovação da escola. Caso a nota do aluno
seja maior ou igual a 7, então o aluno
estará aprovado, caso contrário,
estará reprovado*/

/*Incluir o cabeçalho de entrada e saída de
dados padrão: std(Standard -> Padrão) io
(i->input | output)*/
#include <stdio.h>

//Definir uma constante. Sempre em Letras Maiúsculas
#define MEDIAESCOLA 7.0

int main(){
    //declaração da variável notaAluno com o tipo float
    float notaAluno;
    printf("Digite a nota do aluno e tecle Enter\n");
    scanf("%f",&notaAluno);
    
    //Desvio de fluxo com if .. else
    if(notaAluno >= MEDIAESCOLA){
        printf("O aluno está aprovado");
     }
     else{
        printf("o aluno está reprovado");
     }
    return 0; 
}