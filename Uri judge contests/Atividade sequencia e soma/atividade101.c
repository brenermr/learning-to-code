/*
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.
5 2
6 3
5 0
Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.
2 3 4 5 Sum=14
3 4 5 6 Sum=18
*/
#include<stdio.h>
    
    
    int main()
    {
       int i, swap;
       int vetor[2];
       int off = 1;
       int soma= 0;

       while (off != 0)
       {
           scanf("%d%d", &vetor[0], &vetor[1]);
           if (vetor[0] == 0 || vetor[1] == 0)
           {
               off = 0;
               break;
               
           }
           
           if (vetor[0] > vetor[1])
           {
               swap = vetor[0];
               vetor[0] = vetor[1];
               vetor[1] = swap;
           }
            for (i = vetor[0]; i <= vetor[1] ; i++)
            {
                soma += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);           
            soma = 0;
       }
        return 0;
    }
   