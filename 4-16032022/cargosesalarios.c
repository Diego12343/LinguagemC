/* Programa para calcular o salário dos funcionários
 de acordo com os cargos e variações de salário
 */

 #include <stdio.h>
 #define SALARIODIRETOR 15.000,00
 #define SALARIOGERENTE 12.000,00
 #define SALARIOANALISTA 8.000,00
 #define SALARIOASSISTENTE 4.000,00
 #define SALARIOAUXILIAR 2.000,00
 #define SALARIOOUTROS 0000,00

 int main(){
 char cargo [15];
 printf("Digite o seu cargo e tecle ENTER\n");
 scanf("%s",cargo);
 if(strcmp(cargo == "diretor")==0){
 printf("O salario do diretor é R$ 15.000,00");
 }
 else if(strcmp(cargo,"gerente")==0){
     printf("O salário do gerente é R$ 12.000,00");
 }
 else if(strcmp(cargo,"Analista")==0){
      printf("O salário do analista é R$ 8.000,00 ");
}
 else if(strcmp(cargo,"Assistente")==0){
     printf("O salário do assistente é R$ 4.000,00");   
}      
 else if(strcmp(cargo,"Auxiliar")==0){
    printf("O salário do auxiliar é R$ 2.000,00");
}    
 else if(strcmp(cargo,"Outros")==0){
    printf ("O salário de outros não há salário"); 
}
  return 0;
}

 