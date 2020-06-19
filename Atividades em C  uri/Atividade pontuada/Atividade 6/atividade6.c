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

#include <stdio.h>
  double numero[3];
  double ponto[3];
  void verificaNumero();
  void verificaTriangulo();


  int main()
  {
    
    scanf("%lf%lf%lf", &numero[0], &numero[1], &numero[2]);
    verificaNumero();
    verificaTriangulo();
    return 0;

  }

  void verificaNumero()
  {
        if (numero[0] >= numero[1] && numero[0] >= numero[2])
        {
           ponto[0] = numero[0];
           ponto[1] = numero[1];
           ponto[2] = numero[2];
        }
        if (numero[1] >= numero[0] && numero[1] >= numero[2])
        {
           ponto[0] = numero[1]; 
           ponto[1] = numero[0];
           ponto[2] = numero[2];
        }
        if (numero[2] >= numero[0] && numero[2] >= numero[1])
        {
            ponto[0] = numero[2];
            ponto[1] = numero[1];
            ponto[2] = numero[0];
        } 
  }

  void verificaTriangulo()
  {
      
    if (ponto[0] >= (ponto[1] + ponto[2]))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        if(ponto[0] < ponto[1] + ponto[2])
        {
          if ((ponto[0] * ponto[0]) == (ponto[1] * ponto[1]) + (ponto[2] * ponto[2]))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            if ((ponto[0] * ponto[0]) > ((ponto[1] * ponto[1]) + (ponto[2] * ponto[2])))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if ((ponto[0] * ponto[0]) < ((ponto[1] * ponto[1]) + (ponto[2] * ponto[2])))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
            if ((ponto[0] == ponto[1]) && (ponto[1] == ponto[2]))
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            if (((ponto[0] == ponto[1]) && (ponto[1] != ponto[2])) || ((ponto[0] == ponto[2]) && (ponto[1] != ponto[2])) || ((ponto[2] == ponto[1]) && (ponto[1] != ponto[0])))
            {
                printf("TRIANGULO ISOCELES\n");
            }
        }
  } 