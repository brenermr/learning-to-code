#include <stdio.h>
    double nota[3][3];// linha :0 notas; 1 nota*peso; 2 media
    void setup();
    void calculaMedia();
    void imprimir();
    int main() {
        
        
        
        scanf("%lf %lf %lf", &nota[0][0], &nota[0][1], &nota[0][2]);
        setup();
        calculaMedia();
        imprimir();
        return 0;
    }
    
    void setup()
    {
        nota[1][0] = nota[0][0]*2;
        nota[1][1] = nota[0][1]*3;
        nota[1][2] = nota[0][2]*5;
    }
    
    void calculaMedia()
    {
        nota[2][0] = (nota[1][0]+nota[1][1]+nota[1][2])/10.0;
    }

    void imprimir()
    {
        printf("MEDIA = %.1lf\n", nota[2][0]);
    }