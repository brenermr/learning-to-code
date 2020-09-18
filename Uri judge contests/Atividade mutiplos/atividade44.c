/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem
"Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.
*/
#include<stdio.h>
#include<stdbool.h>
    //Var global
    int valor[2];//0-a 1-b
    bool condicao;
    //Funções
    void lerValores();
    void calcula();
    void imprimir();

        int main()
        {   
            lerValores();
            calcula();
            imprimir();   
            return 0;       
        }
    void imprimir()
    {
        if (condicao = true)
        {
            printf("Sao Multiplos\n");
        }
        if(condicao = false)
        {
            printf("Nao sao Multiplos\n");
        }
    }
    void lerValores()
    {   
        int i;
        for (i = 0; i < 1; i++)
        {
            scanf("%d%d", &valor[0], &valor[1]);
        }   
    }
    void calcula()
    {
        if (valor[0] > valor[1])
        {
            if (valor[0] % valor[1] == 0)
            {
                condicao = true;
            }else
            {
                condicao = false;
            }
        }else
        {
            if (valor[1] % valor[0] == 0)
            {
                condicao = true;
            }else
            {
                condicao = false;
            }
        } 
    }