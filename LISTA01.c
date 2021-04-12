
#include<stdio.h>
#include<stdlib.h>


/*
=======================LISTA 01===================================
1. Crie um programa para imprimir os números de 1 a 10 utilizando
função.
//=================SOLUÇÃO 01======================================*/

int main(void)
{
  int i=1;

  for(i= 1; i <= 10; i++)
  {
    printf("%d ", i);
  }
  return(0);
}
/*2. Crie um programa para imprimir os números de 10 a 1 utilizando
função.
//=================SOLUÇÃO 02======================================*/

int main(void)
{
  int i=10;

  for(i= 10; i >= 1; i--)
{
    printf("%d ", i);
}
    return(0);
}
/*3. Crie um programa que calcule e imprima o valor do fatorial de um
número informado pelo usuário, usando função.
//==================SOLUÇÃO 03=====================================*/

int main()
{
  int fatorial,resp;

    printf("Digite o número que deseja a fatorial: ");
    scanf("%d",& fatorial);

    resp=1;

  for(; fatorial>=1; fatorial--)
  {

    resp*=fatorial;
}
   printf("\n O fatorial do seu número será: %d", resp);

  return 0;
}

/*4. Crie um programa para imprimir os números de 1 a N, onde N é um
número fornecido pelo usuário, utilizando o conceito de
recursividade.
//=================SOLUÇÃO 04======================================*/

int incremento (int n)
{
   int resultado;
   if (n == 1)
{
      return (1);
}
   else
{
        n*= incremento(n-1);
}
   return (resultado);
}

int main()
{
int n;
int resultado;


printf("\n Digite o número N : ");
scanf("%d", &n);

resultado = incremento(n);

for (resultado = 1; resultado <= n ; resultado++)

  printf("\n %d", resultado);

 return 0;}
/*5. Crie um programa para imprimir os números de N a 1 utilizando
função recursiva.
//=================SOLUÇÃO05=======================================*/

int decremento (int n)
{
  int resultado;
  if (n >= 1)
{
      return (1);
}
  else
{
        n*= decremento(n-1);
}
   return (resultado);
}

int main()
{
   int n, resultado;


   printf("\n Digite o número N : ");
   scanf("%d", &n);

   resultado = decremento(n);

    for (n ; n >=resultado ; n--)
      printf("\n %d", n);
      return 0 ;}

/*6. Crie um programa que calcule e imprima o valor do fatorial de um
número informado pelo usuário, usando recursividade

//=================SOLUÇÃO06=======================================*/


//função fatorial

int main()
{
  int n;
  double f, fatorial(int n);

  printf("Digite o numero para calcular o fatorial: ");
  scanf("%d",&n);

  //chamada da função fatorial
  f = fatorial(n);

  printf("Fatorial de %d = %.0lf",n,f);

  return 0;
}
//Função recursiva que calcula o fatorial
//de um numero inteiro n

double fatorial(int n)
{
  double fat;

  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else
{
    //Chamada recursiva
    fat = n * fatorial(n - 1);
    return (fat);
}
}
