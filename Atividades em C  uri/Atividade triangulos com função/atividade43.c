/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo.
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem
Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/
#include<stdio.h>
#include<stdbool.h>
    double a,b,c;
    double resultado;
    bool triangulo = false;
    void verifica();
    void calcula();
    void imprimir();

    int main()
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        verifica();
        calcula();
        imprimir();   
        return 0;
    }
    void calcula()
    {
        if (triangulo == true)
        {
            resultado = (a + b) + c;   
        }
        if(triangulo == false)
        {       
          resultado = (a+b)*c/2;
            
        }       
    }
    void verifica()
    {  
        if(a >= b + c || b>=c+a || c>= a+b)
        {
            triangulo = false;
        }else
        {
            triangulo = true;       
        }
    }
    void imprimir()
    {
        if (triangulo == true)
        {
            printf("Perimetro = %.1lf\n", resultado);
        }
        if (triangulo == false)
        {
            printf("Area = %.1lf\n", resultado);
        }
    }