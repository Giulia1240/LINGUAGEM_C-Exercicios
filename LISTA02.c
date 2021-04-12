#include<stdio.h>
#include<stdlib.h>

/*
1. Escreva um programa usando recursividade dupla para gerar
valores da função de Ackermann, a qual é definida para valores
inteiros e não negativos m e n da seguinte forma:

• Valores da função de Ackermann*/

#include <stdio.h>

unsigned long int ack(unsigned long int m ,unsigned long int n){
  if(m==0){
    return (n+1);

  }
  else if(n==0){

      return (ack(m-1,1));
}
else{
  return(ack(m-1,ack(m-1,1)));

}}

int main(){
unsigned long int valorM,valorN;
scanf("%lu,%lu",&valorM,&valorN);
printf("Ackermann= %lu \n",ack(valorM,valorN) );

return 0;
}




