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
        int p=0;
        //COLETA O VALOR DE N
        scanf("%d", &n);
        //VETOR COM POSIÇÕES N
        int valor[n];
        //I É 1, ENQUANTO I FOR MENOR QUE N, INCREMENTE I
        for (i = 1; i <= n; i++)
        {
            // SE I FOR PAR
            if (i % 2 == 0)
            {
                //VALOR[PAR] É IGUAL O VALOR DA POSIÇÃO
                valor[p] = i;
                //PAR RECEBE UMA QUANTIDADE; VALOR[P] = [I]
                p++;
            }
            
        }
        //I É 0, ENQUANTO I FOR MENOR QUE A QUANTIDADE DE VALORES PARES, FAÇA
        for (i = 0; i < p; i++)
        {
            //ESCREVA O VALOR[PAR] QUE ESTÁ NA POSIÇÃO I
            printf("%d ^ 2= %d \n", valor[i], (valor[i]*valor[i]));
        }
        
        return 0;
    }