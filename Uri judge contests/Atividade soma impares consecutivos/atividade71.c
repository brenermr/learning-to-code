/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre
 os valores fornecidos na entrada que deverá caber em um inteiro.

Exemplo de Entrada	Exemplo de Saída
6
-5
*/

#include<stdio.h>
    int main()
    {
        int entrada[2];
        int soma = 0;
        int i;
        // x = 0 | y = 1
        scanf("%d %d", &entrada[0], &entrada[1]); 
        if (entrada[0] > entrada[1])
        {
            for (i = entrada[1]+1; i < entrada[0]; i++)
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }   
            }  
        } 
        if (entrada[0] < entrada[1])
        {
            for (i = entrada[0]; i < entrada[1]; i++)
            {
                soma += i;
            }   
        }        
        printf("%d \n", soma); 
    return 0;
    }