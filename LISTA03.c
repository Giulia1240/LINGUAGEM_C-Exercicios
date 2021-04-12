#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>


/*
1. Escreva um algoritmo que ordene os valores de um vetor de
maneira decrescente (do maior para o menor).
2. Implemente o algoritmo de ordenação Bubble Sort e conte o
número total cópias de valores do vetor dentro do while ao
executar no seguinte array: 72 12 62 69 27 67 41 56 33 74
3. Dada a sequencia de números: 3 4 9 2 5 8 2 1 7 4 6 2 9 8 5 1,
ordene-a em ordem crescente segundo o algoritmo Quick Sort,
apresentando a sequencia obtida após cada passo do algoritmo.
4. Escreva um algoritmo que gere um vetor aleatório e um número
extra e insira esse número na sua posição correta no vetor
ordenado, deslocando os outros números se necessário.*/



//###########################################SOLUÇÃO 01(REVISAR)##########################################


int main(){

  setlocale(LC_ALL, "portuguese");

  int i,j,aux,vet[10];
   printf("\n Seja Bem Vindo!");

  for(i=0;i<10;i++)
  {
  printf("\n Digite um valor para a posição %d ",i);
  printf(":");
      scanf("%d",&vet[i]);
  }

  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
      if(vet[i]>vet[j])
      {
        aux= vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
      }
    }
   }

  printf("\nValores do vetor em ordem decrescente:");
  for(i=9;i>=0;i--)
  {
    printf(" %d ",vet[i]);
  }
   getchar();
   return 0;
}
//###########################################SOLUÇÃO 02(REVISAR)##########################################

#define n 10

int main(){

  setlocale(LC_ALL, "portuguese");

  int i,j,k,aux,ct=0;
  int vet[n] = {72,12,62,69,27,67,41,56,33,74};

   printf("\n Seja Bem Vindo!");


// Bubble Sort
for(i = n-1; i > 0; i--) {
  for(j = 0; j < i; j++) {
    if(vet[j] > vet[j+1]) {
      aux = vet[j]; vet[j] = vet[j+1];
      vet[j+1] = aux; //troca
      ct = ct+1; // Contabilizando trocas
    }
  }
}
printf("\nVetor ordenado:");
for(i=0;i<n;i++){
  printf(" %d ",vet[i]);
}
printf("\nQtd de trocas: %d",ct);



   getchar();
   return 0;
}

//###########################################SOLUÇÃO 03(REVISAR)##########################################

#define n 16;


void Quick(int vetor[10], int inicio, int fim);
int main(){

   int vetor[n] = {3,4,9,2,5,8,2,1,7,4,6,2,9,8,5,1};

   int i;
   printf("Vetor desordenado:\n");
   for(i = 0; i < n; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n\nOrdenação:");
   Quick(vetor, 0, n-1);

   printf("\n\nVetor ordenado:\n");
   for(i = 0; i < n; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

void Quick(int vetor[n], int inicio, int fim){

   int pivo, aux, i, j,k, meio;

   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];

   do{
      while (vetor[i] < pivo)
      i = i + 1;
      while (vetor[j] > pivo)
      j = j - 1;

      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   printf("\n");
    for(k = 0; k < n; k++){
      printf("%d ", vetor[k]);
    }

   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);



}





