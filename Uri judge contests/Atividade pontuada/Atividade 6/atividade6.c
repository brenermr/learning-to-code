/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente,
de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam,
com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.


ACEITA PELO URI.
*/

#include<stdio.h>
    double vetor[3];               // A = 0    B = 1    C = 2
    void ordenar();
    void lerValor();
    void verificaTriangulo();
    void verificaTipo();
    int main()
    {
        lerValor();
        ordenar();
        if (vetor[0] > 0 && vetor[1] > 0 && vetor[2] > 0)
        {
            verificaTriangulo();
            verificaTipo();
        }
        
        return 0;
    }
   void verificaTipo()
   {
       if (vetor[0] == vetor[1] && vetor[1] == vetor[2])
            {
                printf("TRIANGULO EQUILATERO\n");
            }else if (vetor[0] == vetor[1] || vetor[1] == vetor[2] || vetor[0] == vetor[2])
            {
                printf("TRIANGULO ISOSCELES\n");
            }
   }   
    void verificaTriangulo()
    {
       double a2, b2, c2;
            a2 = vetor[0]*vetor[0];
            b2 = vetor[1]*vetor[1];
            c2 = vetor[2]*vetor[2];
            
            if (vetor[0] >= (vetor[1] + vetor[2]))
            {
                printf("NAO FORMA TRIANGULO\n");
            }else if(a2 == (b2 + c2)){
                printf("TRIANGULO RETANGULO\n");
            }else if (a2 > (b2 + c2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }else if (a2 < (b2 + c2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }       
    }
    void lerValor()
    {
        scanf("%lf%lf%lf", &vetor[0], &vetor[1], &vetor[2]);
    }
    void ordenar()
    {
        double swap;
            if(vetor[1] > vetor[0] && vetor[1] >= vetor[2])
            {
                swap = vetor[1];
                vetor[1] = vetor[0];
                vetor[0] = swap;
            }
            if (vetor[2] > vetor[0] && vetor[2] >= vetor[1])
            {
                swap = vetor[2];
                vetor[2] = vetor[0];
                vetor[0] = swap;
            }
    }