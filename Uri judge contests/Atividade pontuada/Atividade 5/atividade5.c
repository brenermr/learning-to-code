/*
Leia 3 valores inteiros e ordene-os em ordem crescente.
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência 
como foram lidos.

Entrada
A entrada contem três números inteiros.
7 21 -14

Saída
Imprima a saída conforme foi especificado.
-14
7
21

7
21
-14
*/
#include<stdio.h>

    int main()
    {
        int n1, n2, n3;
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 > n2)
        {
            if (n2 > n3)
            {
                printf("%d \n %d \n %d \n", n3, n2, n1);

            } else if (n1 > n3)
             {
                printf("%d \n %d \n %d \n", n2, n3, n1);
             }
        }

        if (n2 > n3)
        {
            if (n3 > n1)
            {
                printf("%d \n %d \n %d \n", n1, n3, n2);
            } else if (n2 > n1)
            {
                printf("%d \n %d \n %d \n", n3, n1, n2);
            }       
        }

        if (n3 > n2)
        {
            if (n2 > n1)
            {
                printf("%d \n %d \n %d \n", n1, n2, n3);
            } else if (n3 > n1)
            {
                printf("%d \n %d \n %d \n", n2, n1, n3);
            }
        }

        
         return 0;
    }