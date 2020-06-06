#include <stdio.h>

    float a;
    float b;
    float c;
    float triangulo, circulo, trapezio, quadrado, retangulo;
     
     float main()
    {
        printf("Área do triânculo retângulo: A(Base) C(Altura) \n");
        printf("Área do circulo:  C(Raio) Pi(3,14) \n");
        printf("Área do trapézio: A(BaseMenor) B(BaseMaior) C(Altura) \n");
        printf("Área do quadrado: B(Lado) \n");
        printf("Área do retângulo: A(Lado) B(Lado) \n");
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
    }