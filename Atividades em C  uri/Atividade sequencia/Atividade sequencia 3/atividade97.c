/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13
*/
#include<stdio.h>
    int main()
    {
        int l;
        int i = 1;
        int j = 7;
        int count = 1;
        int matriz[15][2];
        for (l = 0; l < 15; l++)
        {
            if (count > 3)
            {
                i = i + 2;
                j = j + 5; //jota
                count = 1;
            }
            
            matriz[l][0] = i;
            matriz[l][1] = j;
            j--;
            count++;//esqueci de contar

            }   
            for (l = 0; l < 15 ; l++)
            {
                printf("I=%d J=%d\n", matriz[l][0], matriz[l][1]);
            }
            
            return 0;
    }