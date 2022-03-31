#include<stdio.h>
#include<stdlib.h>


void soma(int array[],int tamanho){
    int rs = 0;
    for(int i=0; i< tamanho ; i++){
        rs += array[i];
    }
    printf("%d\n", rs);
}

void maiorValor(int array[],int tamanho){
    int m = array[0];
    for(int i = 1;i <tamanho ; i++){
        if(array[i]>m){
            m = array[i];
        }
    }
    printf("o maior valor é %d\n",m);
}

    void menorValor(int array[],int tamanho){
    int m = array[0];
    for(int i = 1;i <tamanho ; i++){
        if(array[i]< m){
            m = array[i];
        }
    }
    printf("O menor valor é %d\n",m);

}



void ordenar(int valores[], int tamanho){

    for(int j=1; j < tamanho; j++){
        int x= valores[j];
        int i;
        for(i =j-1 ; i >= 0 && valores[1] > x; i--){
            valores[i+1]= valores[i];
        }
        valores[i+1]= x;
    }
    for(int p=0 ; p < tamanho ; p++);
}