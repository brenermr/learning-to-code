/*
Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), 
ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0),
embora a descrição correta seja (EVEN NULL), pois por definição zero é par, 
seu programa deverá imprimir apenas NULL.

Entrada
A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. 
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

Saída
Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo.
Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras
 impressas na mesma linha.

Exemplo de Entrada	Exemplo de Saída
4
-5
0
3
-4
*/
#include<stdio.h>
    int main()
    {
        int x;
        int i;
        scanf("%d", &x);
        int valores[x];
        
        for (i = 0; i < x; i++)
        {
            scanf("%d", &valores[i]);
        }
        for(i = 0; i < x; i ++)
        {
            if(valores[i] != 0)
            {
                if (valores[i] % 2 == 0)
                {
                    if (valores[i] > 0)
                    {
                        printf("EVEN POSITIVE \n");//even par
                    }else
                    {
                        printf("EVEN NEGATIVE \n");
                    }
                                       
                }else
                {
                    if (valores[i] > 0)
                    {
                        printf("ODD POSITIVE\n");
                    } else
                    {
                        printf("ODD NEGATIVE\n");
                    }             
                }
                               
            } else
            {
                printf("NULL\n");
            }
        }        
        
         return 0;
    }
