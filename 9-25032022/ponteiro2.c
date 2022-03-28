/*
Programa contador usando um ponteiro
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
     int x=0;
     int *px = &x;
     while(x < 10){
         printf("%p tem o valor de %d\n",px,*px);
         x++;
     }




}