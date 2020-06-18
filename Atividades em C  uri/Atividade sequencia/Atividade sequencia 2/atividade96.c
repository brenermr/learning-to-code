/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Entrada	Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5
*/
#include<stdio.h>
    int main()
    {
        int matriz[15][2];
        int l;
        int i = 1;
        int j = 7;
        int count = 1;
        
        for (l = 0; l < 15; l++)
        {
            if (count > 3)
            {
                i += 2;
                count = 1;
                j = 7;
            }
            matriz[l][0] = i;
            matriz[l][1] = j;
            j--;
            count++;
        }

        for (l = 0; l < 15; l++)
        {
            printf("i=%d j=%d\n", matriz[l][0], matriz[l][1]);

        }
        return 0;
            
    }