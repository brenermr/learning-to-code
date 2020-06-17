/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
ada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.


*/
#include<stdio.h>
    int main()
    {
        int n;
        int i;
        int impar = 0;
        int soma = 0;
        scanf("%d", &n);
        int matriz[n][3];//  0 = teste 1;  1 = teste 2; 2 = soma
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &matriz[i][0], &matriz[i][1]);
            matriz[i][2] = 0;
            if (matriz[i][0] < matriz[i][1])
            {
                ///soma = matriz + 1 pois não o próprio número não conta
                for (soma = matriz[i][0]+1; soma < matriz[i][1]; soma++)
                {
                    if (soma % 2 != 0)
                    {
                        matriz[i][2] +=  soma;
                    }
                    
                }
            }
            if (matriz[i][1] < matriz[i][0])
            {
                for (soma = matriz[i][1]+1; soma < matriz[i][0]; soma++)
                {
                    if (soma % 2 != 0)
                    {
                        matriz[i][2] += soma;
                    }
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\n", matriz[i][2]);
        }
        
        
        return 0;
    }