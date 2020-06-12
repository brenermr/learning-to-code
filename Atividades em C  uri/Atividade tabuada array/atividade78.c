/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
140
*/

#include<stdio.h>
    int main()
    {
        int x;
        int tabuada[10]; 
        int i;

        scanf("%d", &x);
        if (x > 2 && x < 1000)
        {
           for (i = 0; i < 10; i++)
           {
               tabuada[i] = (i+1) * x;

           }
           for (i = 0; i < 10; i++)
           {
               printf("%d x %d = %d \n", i+1, x, tabuada[i]);
           }
            
        }
        
        return 0;
    }