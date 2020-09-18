/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo
I=1 J=60
I=4 J=55
I=7 J=50

I=? J=0


*/
#include<stdio.h>
    int main()
    {
        int i, j;
        int matriz[14][14];

        for (i = 1; i <= 14 ; i)
        {
            for (j = 60; j >= 0; j -= 5)
            {
                printf("I=%d J=%d\n", i, j);
                i += 3;
            }
            
        }

        return 0;
        
    }