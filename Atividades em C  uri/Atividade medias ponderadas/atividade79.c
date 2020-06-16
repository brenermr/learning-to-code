/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir.
Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
presente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2,
o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha.
Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
3
6.5 4.3 6.2
5.1 4.2 8.1
8.0 9.0 10.0
*/

#include<stdio.h>
    int main()
    {
        int n;
        int i, j;
        double soma;
        double peso;
        double media;
        

        scanf("%d", &n);
        double matriz[n][3];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%lf", &matriz[i][j]);
            }
        }       
        
        for (i = 0; i < n; i++)
        {
            soma = 0;
            for (j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    peso = 2.0;
                }
                if (j == 1)
                {
                    peso = 3.0;
                }
                if (j == 2)
                {
                    peso = 5.0;
                }
                soma += (matriz[i][j]*peso);
            }
            media = soma/10.0;
            printf("%.1lf\n", media);
            media = 0;
        }
    }
 