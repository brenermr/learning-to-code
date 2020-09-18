/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes números será positivo.

7
-5
6
-3.4
4.6
12

Saída
O primeiro valor de saída é a quantidade de valores positivos.
A próxima linha deve mostrar a média dos valores positivos digitados.

4 valores positivos
7.4

*/

#include<stdio.h>

    int main()
    {
        double valor[6];
        double soma = 0, media;
        int i;
        int cont =0;
        scanf("%lf %lf %lf %lf %lf %lf", &valor[0], &valor[1], &valor[2], &valor[3], &valor[4], &valor[5]);
        for (i = 0; i < 6; i++)
        {
            if (valor[i] > 0)//se i for positivo faça isso:
            {
                cont++;
                soma = valor[i] + soma; // soma é igual valor da posição i + soma(0)
            }
            
        }

        media = soma / cont;
        printf("%d valores positivos \n", cont);
        printf("%.1f \n", media);
        return 0;   
    }