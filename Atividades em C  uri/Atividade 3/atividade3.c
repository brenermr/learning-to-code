#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;
    int n100, n50, n20, n10, n5, n2;
    int n1, m50, m25, m100, m5, m10, m1;
    int resto100, resto50, resto20, resto10, resto5, resto2;
    

    //Entrada do valor
    scanf("%d", &valor);

    //Saída NOTAS:
    printf("NOTAS: \n");
    
    //Número de notas
    //Lógica
    
    n100 = valor / 100;
    printf("%d nota(s) de R$ 100.00 \n", n100);
    resto100 = valor % 100;
    

    n50 = resto100 / 50;
    printf("%d notas(s) de R$ 50.00 \n", n50);
    resto50 = resto100 % 50;
    
    n20 = resto50 / 20;
    printf("%d notas(s) de R$ 20.00 \n", n20);
    resto20 = resto50 % 20;

    n10 = resto20 / 10;
    printf("%d notas(s) de R$ 10.00 \n", n10);
    resto10 = resto20 % 10;

    n5 = resto10 / 5;
    printf("%d notas(s) de R$ 5.00 \n", n5);
    resto5 = resto10 % 5;

    n2 = resto5 / 2;
    printf("%d notas(s) de R$ 2.00 \n", n2);
    resto2 = resto5 % 2;

    //Saída MOEDAS:
    printf("MOEDAS: \n");

    
    n1 = resto2 / 1;
    printf("%d moeda(s) de R$ 1.00 \n", n1);
    

    m50 =  resto100 / 10;
    printf("%d moeda(s) de R$ 0.50 \n", m50);
    
    

   

   

    return 0;
}
