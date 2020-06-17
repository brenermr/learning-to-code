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
    
*/
#include<stdio.h>
    int main()
    {
        int tipo[2];// 0 = cedulas; 1 = moedas
        int dinheiro[2][6];// linha 0 = valores de cédula; linha 1 = valores de moeda
        double valor;
        int i;
        int resto;
        scanf("%lf", &valor);
        tipo[0] = valor / 1.0;
        dinheiro[0][0] = valor /100;
        resto = (int)valor % 100;
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
        //moeda
        dinheiro[1][0] = resto / 1;
        //centavos
        tipo[1] = (valor - tipo[0]) * 100;
        resto = tipo[1] % 100;
        dinheiro[1][1] = resto / 50;
        resto = resto % 50;
        dinheiro[1][2] = resto / 25;
        resto = resto % 25;
        dinheiro[1][3] = resto / 10;
        resto = resto % 10;
        dinheiro[1][4] = resto / 5;
        resto = resto % 5;
        dinheiro[1][5] = resto / 1;
        
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n".dinheiro[0][0]);
        printf("%d nota(s) de R$ 50.00\n".dinheiro[0][1]);
        printf("%d nota(s) de R$ 20.00\n".dinheiro[0][2]);
        printf("%d nota(s) de R$ 10.00\n".dinheiro[0][3]);
        printf("%d nota(s) de R$ 5.00\n".dinheiro[0][4]);
        printf("%d nota(s) de R$ 2.00\n".dinheiro[0][5]);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",dinheiro[1][0]);
        printf("%d moeda(s) de R$ 0.50\n",dinheiro[1][1]);
        printf("%d moeda(s) de R$ 0.25\n",dinheiro[1][2]);
        printf("%d moeda(s) de R$ 0.10\n",dinheiro[1][3]);
        printf("%d moeda(s) de R$ 0.05\n",dinheiro[1][4]);
        printf("%d moeda(s) de R$ 0.01\n",dinheiro[1][5]);        
        return 0;
    }
