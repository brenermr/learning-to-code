/*
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos 
 N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.

Exemplo de Entrada	Exemplo de Saída
13
*/
#include<stdio.h>
    int main()
    {
        int i;
        int x;
        int vetor[10000];
        int p = 0;
        
        scanf("%d", &x);
        if (x < 10000)
        {
            for (i = 0; i < 10000; i++)
            {
                if (i % x == 2)
                {
                    vetor[p] = i;
                    p++;
                    
                }

                
            }
            for (i = 0; i < p; i++)
            {
                printf("%d \n", vetor[i]);
            }
                      
        }    
        return 0;
    }