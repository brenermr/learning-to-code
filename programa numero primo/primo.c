#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Programa que calcula todos os números primos entre 1 e x
int numeroMax; //Valor de x inserido pelo usuário
int contarPrimo = 0;//Armazena a quantidade de números primos
int divPrimo = 0; //var Divisor
int primo; //Var primos

int main(void)
{
    //Recolhe  valor X
    printf("Verificar os números primos até X: \n");
    printf("informe X \n");
    //Armazena o valor de X, até onde será calculado.
    scanf("%d", &numeroMax);
    //Enquanto i for menor que o numeroMax incremente i+1
    //i = var que repete até atingir o numeroMax
    //i = 2 porque o valor: 1 não é um número primo
    for(int i = 2; i < numeroMax; i++)
    {
        divPrimo= 0;
        //Enquanto  primo for menor igual o repetidor, incremente i+1 a var primo
        for ( primo = 1; primo <= i; primo++)
        {
            //Se o resto de primo for zero, incremente divPrimo + 1 no divisor
            if(i % primo == 0)
            {
                divPrimo++;
            }
        }
        //Se o divisor for 2, incremente uma unidade de número primo em contarPrimo
        if(divPrimo == 2)
        {
            contarPrimo++;
        }   
    }
    //Saída do resultado da quantidades de números primos entre 1 e o valor inserido em x(numeroMax)
    printf("Números primos de 2 à %d é igual há: \n  %d  \n ", numeroMax, contarPrimo);
    return 0;
}
