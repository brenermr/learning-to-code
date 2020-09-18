/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
e não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
aso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
aso contrário, imprima o resultado das raízes com 5 dígitos após o ponto,
com uma mensagem correspondente conforme exemplo abaixo.
Imprima sempre o final de linha após cada mensagem.
*/
#include<stdio.h>
#include<math.h>
    int main()
    {
        double a, b, c, delta;
        scanf("%lf%lf%lf", &a, &b, &c);
        delta = (b*b) - 4*a*c;

        if (delta >= 0 && a != 0)
        {
            printf("R1 = %.5lf\n",((b*-1) + sqrt(delta)) /(2*a));
            printf("R2 = %.5lf\n",((b*-1) - sqrt(delta)) / (2*a));
        }else
        {
            printf("Impossivel calcular");
        }
        
        return 0;   
    }