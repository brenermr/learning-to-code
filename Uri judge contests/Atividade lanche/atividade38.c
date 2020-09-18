/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
A seguir, calcule e mostre o valor da conta a pagar.
Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/
#include<stdio.h>
    int main()
    {
        double codigoValor[5];
        int quantidade;
        int p, i;
        double total;
        codigoValor[0] = 4.00;
        codigoValor[1] = 4.50;
        codigoValor[2] = 5.00;
        codigoValor[3] = 2.00;
        codigoValor[4] = 1.50;
        scanf("%d%d",&p, &quantidade);
        for (i = 0; i < p; i++)
        {
            total = codigoValor[i] * quantidade;   
        }
        printf("TOTAL: R$ %.2lf\n", total);    
        return 0;
    }