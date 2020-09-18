
#include<math.h>
#include<stdio.h>
//constantes (pi / gravidade)
#define g 9.80665
#define pi 3.14159

    //var globais 
    double  h, h1, v, altura, angulo, vx, vy, queda;
    int n, p1, p2;
    //funções
    double seno(double angulo);
    double cosseno(double angulo);
    
    int main()
    {
        scanf("%lf", &h); //altura de inicio
        h1 = 0.0;
        scanf("%d %d", &p1, &p2); // ponto de inicio e ponto final da cidade
        scanf("%d", &n); // tentativas
        for (int i = 0; i < n; i++)
        {
            scanf("%lf %lf", &angulo, &v);
            altura = ((v * seno(angulo)) * (v * seno(angulo))) / (2 * g);
            h1 = altura + h;
            vx = v * cosseno(angulo);
            vy = v * seno(angulo);
            queda = ((vx * vy) / g) + (vx * (sqrt((2 * g) / h1)));//onde o pato caiu
            if (queda >=p1 && queda <= p2)
            {
                printf("%.5lf -> DUCK\n", queda);
            }else
            {
                printf("%.5lf -> NUCK\n", queda);
            } 
            return 0;
        }
    }
    double seno(double angulo)
    {
        return (sin((angulo * pi) / 180.0));
    }

    double cosseno(double angulo)
    {
        return(cos((angulo * pi) / 180.0));
    }