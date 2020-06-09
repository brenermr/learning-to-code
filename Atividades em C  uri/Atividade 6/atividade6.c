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
*/

#include<stdio.h>
    
    int main()
    {
        //ordenar do maior para o menor.
        double n1, n2, n3;
        double a, b, c;
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        //definindo maior valor como maior lado
        if (n1 >= n2 && n1 >= n3)
        {
           a = n1;
           b = n2;
           c = n3;
        }

        if (n2 >= n1 && n2 >= n3)
        {
           a = n2; 
           b = n1;
           c = n3;
        }

        if (n3 >= n1 && n3 >= n2)
        {
            a = n3;
            b = n2;
            c = n1;
        }

       
        //se A for maior ou igual a B+C não é um triangulo

        if (a >= (b + c))
        {
            printf("NAO FORMA TRIANGULO \n");
        } 
        // Senão for, então forma algum triângulo 
        else
        {
            //Qual é o triângulo ?
            if ((a * a) == (b * b) + (c * c))
        {
            printf("TRIANGULO RETANGULO \n");
        }

        if ((a * a) > ((b * b) + (c * c)))
        {
            printf("TRIANGULO OBTUSANGULO \n");
        }

        if ((a * a) < ((b * b) + (c * c)))
        {
            printf("TRIANGULO ACUTANGULO \n");
        }
        
        
        if ((a == b) && (b == c))
        {
            printf("TRIANGULO EQUILATERO \n");
        }
        
        if (((a == b) && (b != c)) || ((a == c) && (b != c)) || ((c == b) && (b != a)))
        {
            printf("TRIANGULO ISOCELES \n");
        }
        }
        
        
        
        

        
        return 0;
    }