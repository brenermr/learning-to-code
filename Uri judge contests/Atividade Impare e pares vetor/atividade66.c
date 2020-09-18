/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados
foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha,
não esquecendo o final de linha após cada uma.

Exemplo de Entrada	Exemplo de Saída
-5
0
-3
-4
12
*/
#include<stdio.h>

    int main()
    {
        int valor[5];
        int cont=0, negativos, positivos, pares, impar, i;
        negativos=0;
        positivos=0;
        pares=0;

        for (i=0; i<5; i++)
        {
            scanf("%d", &valor[i]);
            if (valor[i]%2==0)
            {
                pares++;

            }
            

            if (valor[i]>0)
            {
                positivos++;
            } if (valor[i]<0)
            {
               negativos++;
            }
                              
        }
        printf("%d valor(es) par(es) \n", pares);
        printf("%d valor(es) impar(es) \n",5-pares);
        printf("%d valor(es) positivo(s) \n", positivos);
        printf("%d valor(es) negativos(s) \n", negativos);        

    }