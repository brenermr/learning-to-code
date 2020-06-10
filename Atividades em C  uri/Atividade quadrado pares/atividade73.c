/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, 
inclusive N, se for o caso.

Entrada
A entrada contém um valor inteiro N (5 < N < 2000).

Saída
Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000
 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que 
 isso não ocorra.

Exemplo de Entrada	Exemplo de Saída
6
*/

#include<stdio.h>
    int main()
    {
        int n;
        int i;
        int soma = 0;
        int p=0;
        
        scanf("%d", n);
        int valor[n];

        
        for (i = 1; i <=  n; i++)
        {
            if (i%2 != 0)
            {
               valor[p]++;
               p++;
            }

            if (/* condition */)
            {
                /* code */
            }
            
            
        }
        
        printf("%d ^ 2= %d \n",);
        return 0;
    }