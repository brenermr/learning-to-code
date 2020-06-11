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
        int vetor[2];//vetor 0= valor N | vetor 1=limite  de N
        
        scanf("%d", &vetor[0]);
        vetor[1] = 10000;
        if (vetor[0] < vetor[1])
        {
            for (i=1;i<= 10000;i++)
            {
                if (i%vetor[0]==2)
                {
                    printf("%d \n",i);
                }
            }
        }    
        return 0;
    }