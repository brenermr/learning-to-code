/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número,
depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46)
e mostre os N primeiros números dessa série.
Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).
Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.    
*/

#include<stdio.h>
  int main()
  {
    int n, i;
    int posicao[2];// 0-atual ; 1- anterior
    int count = 0;
    scanf("%i", &n);
    int vetor[n];
    for(i=0; i <= n; i++)
    {
      if(count <= 1)
      {
        vetor[i] = i;
        posicao[1] = i;
      }else if(count == 2)
      {
        vetor[i] = i - 1;
        posicao[0] = vetor[i];
      }else if(count > 2)
      {
        vetor[i] = (posicao[0]+posicao[1]);
        posicao[0] = vetor[i];
        posicao[1] = vetor[i] - posicao[1];  
      }
      count++;
    }
    count = 0;
    for(i=0; i < n; i++)
    {
      if(count == (n - 1))
      {
        printf("%i\n", vetor[i]);
      }else
      {
        printf("%i ", vetor[i]);
      }
      count++;
    }
    return 0;
  }