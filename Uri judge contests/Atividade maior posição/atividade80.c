/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/

#include<stdio.h>
    int main()
    {
        int matriz[10][1];
        int i,j;
        int valorMaior = 0;
        int posicaoMaior;

        for (i = 0; i < 10; i++)
        {
            scanf("%d", &matriz[i][0]); 
            if (matriz[i][0] > valorMaior)
            {
                valorMaior = matriz[i][0];
                posicaoMaior = i+1;
            }                   
        }
        printf("%d \n %d \n", valorMaior, posicaoMaior);
        return 0;
    }