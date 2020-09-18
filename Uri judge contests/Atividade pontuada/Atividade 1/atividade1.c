#include <stdio.h>

    float a;
    float b;
    float c;
    float triangulo, circulo, trapezio, quadrado, retangulo;
     
     int main()
    {
        
        printf("Digite o valor de: A B C: \n");
        scanf("%f %f %f", &a, &b, &c);

        triangulo = (a * c) / 2;
        circulo = 3.14 * (c * c);
        trapezio = ((a + b)/2) * c;
        quadrado = b * b;
        retangulo = a * b;

        printf("Área do triângulo = %.3f \n", triangulo);
        printf("Área do circulo = %.3f \n", circulo);
        printf("Área do trapezio = %.3f \n", trapezio);
        printf("Área do quadrado = %.3f \n", quadrado);
        printf("Área do retângulo = %.3f \n", retangulo);

        return 0;
    }