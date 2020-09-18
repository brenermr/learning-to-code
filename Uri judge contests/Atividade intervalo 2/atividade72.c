/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
 mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), 
que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) 
e quantos valores estão fora (out) do intervalo.

Exemplo de Entrada	Exemplo de Saída
4
14
123
10
-25
*/
#include<stdio.h>
     int main()
     {
         int n;
         int totalI =0;
         int totalO =0;
         int i;
         scanf("%d", n);
         int valor[n];

         for(i=0; i< n; i++)
         {
             if (i >= 10 && i <= 20)
             {
                 totalI++;
             } else
             {
                 totalO++;
             }
             
         }

         printf("%d in\n %d out \n", totalI, totalO);
         return 0;
     }