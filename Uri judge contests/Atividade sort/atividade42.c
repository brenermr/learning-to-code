/*
Timelimit: 1
Leia 3 valores inteiros e ordene-os em ordem crescente. No final,
mostre os valores em ordem crescente, uma linha em branco e em seguida,
os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.

CÓDIGO ACEITO PELO URI.
*/
#include<stdio.h>
    
    //Var globais
    int valor[3]; //0 = a; 1 = b; 2 = c;
    void ordenar();
    void imprimir();

    int main()
    {
        scanf("%d%d%d", &valor[0], &valor[1], &valor[2]);
        imprimir();
        return 0;

    }

       
       
    //Funções:
    void ordenar()
    {
        //Primeiro valor Maior.
        if(valor[0] > valor[1] && valor[0] > valor[2])
        {
            if (valor [1] >= valor[2])
            {
                printf("%d\n%d\n%d\n", valor[2], valor[1], valor[0]);
            }
            if (valor [2] >= valor[1])
            {
                printf("%d\n%d\n%d\n",valor[1], valor[2], valor[0]);
            }
        }

        //Segundo valor Maior.
        if(valor[1] > valor[0] && valor[1] > valor[2])
        {
            if (valor [0] >= valor[2])
            {
                printf("%d\n%d\n%d\n", valor[2], valor[0], valor[1]);
            }
            if (valor [2] >= valor[0])
            {
                printf("%d\n%d\n%d\n",valor[0], valor[2], valor[1]);
            }
        }

        //Terceiro valor maior
        if(valor[2] > valor[1] && valor[2] > valor[0])
        {
            if (valor [1] >= valor[0])
            {
                printf("%d\n%d\n%d\n", valor[0], valor[1], valor[2]);
            }
            if (valor [0] >= valor[1])
            {
                printf("%d\n%d\n%d\n",valor[1], valor[0], valor[2]);
            }
        }
    }

    //Essa função imprimi o resultado;
    void imprimir()
    {
        ordenar();
        printf("\n");
        printf("%d\n%d\n%d\n", valor[0], valor[1], valor[2]);
    }