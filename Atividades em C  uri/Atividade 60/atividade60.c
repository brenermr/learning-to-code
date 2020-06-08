/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5                  4 valores positivos
6
-3.4
4.6
12
*/

#include<stdio.h>

    int main() 
    {
        int vetor[6];
        int soma = 0;
        int i;
        scanf("%d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5]);
        for(i=0;i<6;i++)
        {
            if(vetor[i]>0)
            {
                soma++;
            }
        }
        printf("%d valores positivos \n", soma);
        return 0;
    }