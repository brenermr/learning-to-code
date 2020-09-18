/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado,em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
ACEITO DE PRIMEIRA, PORRA
*/
#include<stdio.h>
    //global var
    double valor[2];// 0-input 1-percentual 
    //funções
    void lerValor();
    void classificar();
    double calculaReajuste(double salario,double percentual);
    void imprimir();
    
    int main()
    {
        lerValor();
        classificar();
        imprimir();
        
        return 0;
    }

    //estrutura funções
    void lerValor()
    {
        scanf("%lf", &valor[0]);
    }
    void classificar()
    {
        
        if (valor[0] >= 0.00 && valor[0] <= 400.00)
        {
            valor[1] = 15;
        }else if (valor[0] >= 400.01 && valor[0] <= 800.00)
        {
            valor[1] = 12;
        }else if (valor[0] >= 800.01 && valor[0] <= 1200.00)
        {
            valor[1] = 10;
        }else if (valor[0] >= 1200.01 && valor[0] <= 2000.00)
        {
            valor[1] = 7;
        }else if (valor[0] > 2000.00)
        {
            valor[1] = 4;
        } 
    }
    void imprimir()
    {
        
        printf("Novo salario: %.2lf\n", valor[0] + calculaReajuste(valor[0], valor[1]));
        printf("Reajuste ganho: %.2lf\n", calculaReajuste(valor[0], valor[1]));
        printf("Em percentual: %.0lf %\n", valor[1]);

    }
    double calculaReajuste(double salario,double percentual)
    {
        double reajuste;
        reajuste = (salario * percentual) / 100;
        return reajuste;
    }
    