/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os 
experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no 
laboratório e o  percentual de cada tipo de cobaia utilizada.


Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações,
 ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em 
 cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. 
Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas 
e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma 
em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.

10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R

Total: 92 cobaias
Total de coelhos: 29
Total de ratos: 40
Total de sapos: 23
Percentual de coelhos: 31.52 %
Percentual de ratos: 43.48 %
Percentual de sapos: 25.00 %
*/
#include<stdio.h>
    int main()
    {
        int n;
        int i;
        int totalCobaias = 0.0;
        scanf("%d", &n);
        int testesEmEspecie[n];
        char especie[n];
        int totalEspecie[3] = {0,0,0}; //0=coelho , 1=rato, 2=sapo;
        


        for (i = 0; i < n; i++)
        {
            scanf("%d %s", &testesEmEspecie[i], &especie[i]);
            if (especie[i] == 'C')
            {
                totalEspecie[0] = testesEmEspecie[i] + totalEspecie[0];
                totalCobaias += testesEmEspecie[i];
            }
            if (especie[i] == 'R')
            {
                totalEspecie[1] = testesEmEspecie[i] + totalEspecie[1];
                totalCobaias += testesEmEspecie[i];
            }
            if (especie[i] == 'S')
            {
                totalEspecie[2] = testesEmEspecie[i] + totalEspecie[2]; 
                totalCobaias += testesEmEspecie[i];
            }
            
            
        }
        
        printf("Total: %d cobaias\n", totalCobaias);
        printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", totalEspecie[0], totalEspecie[1], totalEspecie[2]);
        printf("Percentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", ((float)totalEspecie[0] * 100.0)/ (float)totalCobaias,((float)totalEspecie[1] * 100.0)/ (float)totalCobaias,((float)totalEspecie[2] * 100.0)/ (float)totalCobaias);        
        return 0;        
    }