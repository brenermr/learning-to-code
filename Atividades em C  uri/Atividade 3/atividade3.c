/*
Leia um valor de ponto flutuante com duas casas decimais. 
Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
VALOR: 576.73	
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/

/*
#include<stdio.h>

int main()
{
    double valor;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m5, m01;
    int moedas, cedulas;

    scanf("%lf", &valor);
    cedulas = valor / 1.0;
    
    printf("NOTAS: \n");
    n100 = cedulas / 100;
    printf("%d nota(s) de R$ 100.00 \n", n100);
    cedulas = cedulas % 100;
    n50 = cedulas / 50;
    printf("%d nota(s) de R$ 50.00 \n", n50);
    cedulas = cedulas % 50;
    n20 = cedulas / 20;
    printf("%d nota(s) de R$ 20.00 \n", n20);
    cedulas = cedulas % 20;
    n10 = cedulas / 10;
    printf("%d nota(s) de R$ 10.00 \n", n10);
    cedulas = cedulas % 10;
    n5 = cedulas / 5;
    printf("%d nota(s) de R$ 5.00 \n", n5);
    cedulas = cedulas % 5;
    n2 = cedulas / 2;
    printf("%d nota(s) de R$ 2.00 \n", n2);

    printf("MOEDAS: \n");
    cedulas = cedulas % 2;
    m1 = cedulas / 1;
    printf("%d moeda(s) de R$ 1.00 \n", m1);
    moedas = (valor - cedulas)*100;
    moedas = moedas % 100;
    m50 = moedas / 50;
    printf("%d moeda(s) de R$ 0.50 \n", m50);
    moedas = moedas % 50;
    m25 = moedas / 25;
    printf("%d moeda(s) de R$ 0.25 \n", m25);
    moedas = moedas % 25;
    m10 = moedas / 10;
    printf("%d moeda(s) de R$ 0.10 \n", m10);
    moedas = moedas % 10;
    m5 = moedas / 5;
    printf("%d moeda(s) de R$ 0.05 \n", m5);
    moedas = moedas % 5;
    m01 = moedas / 1;
    printf("%d moeda(s) de R$ 0.01 \n", m01);
    
    #include <stdio.h>
 
int main() {
  
    int dinheiro[1][7];
    double valor;
    int i, j;
    int resto;
    scanf("%d", &valor);
    dinheiro[0][0] = valor /100;
    resto = valor % 100;
    dinheiro[0][1] = resto / 50;
    resto = resto % 50;
    dinheiro[0][2] = resto / 20;
    resto = resto % 20;
    dinheiro[0][3] = resto / 10;
    resto = resto % 10;
    dinheiro[0][4] = resto / 5;
    resto = resto % 5;
    dinheiro[0][5] = resto / 2;
    resto = resto % 2;
    dinheiro[0][6] = resto / 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n",dinheiro[0][0]);
    printf("%d nota(s) de R$ 50,00\n",dinheiro[0][1]);
    printf("%d nota(s) de R$ 20,00\n",dinheiro[0][2]);
    printf("%d nota(s) de R$ 10,00\n",dinheiro[0][3]);
    printf("%d nota(s) de R$ 5,00\n",dinheiro[0][4]);
    printf("%d nota(s) de R$ 2,00\n",dinheiro[0][5]);
    printf("%d nota(s) de R$ 1,00\n",dinheiro[0][6]);
    
    
    return 0;
}


    
    
    return 0;

*/

#include<stdio.h>
    int main()
    {
        int quantCedulas[6];
        int quantMoedas[6];
        double cedulas[6] = {100.00,50.00,20.00,10.00,5.00,2.00};
        double moedas[6] = {1.00,0.50,0.25,0.10,0.05,0.01};
        double valor;
        int totalCedulas, totalMoedas, resto;
        int i;

        scanf("%d", &valor);

        totalCedulas=valor/1.0;
        totalMoedas=(valor-totalCedulas)*100;

        resto = totalMoedas;
        for (i = 0; i < 6; i++)
        {
            quantCedulas[i]=resto/(int)cedulas[i];
            resto = resto % (int)cedulas[i];
        }
                
        

        printf("NOTAS :\n");
        for (i = 0; i < 6; i++)
        {
            printf("%d nota(s) de R$ %2.lf \n", quantCedulas[i], cedulas[i]);
        }

        printf("MOEDAS : \n");
        for (i = 0; i < 6; i++)
        {
             printf("%d moeda(s) de R$ %2.lf \n", quantMoedas[i], moedas[i]);    
        }


        



        
    }