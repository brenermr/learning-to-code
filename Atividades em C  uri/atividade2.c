#include<stdio.h>

    float distancia;
    int tempo;
    int velocidade;
    float combustivelGasto;
    

    int main()
    {
        printf("Calcular distância: \n");
        printf("Digite o tempo(Horas) gasto na viagem: \n");
        scanf("%d", &tempo);
        printf("Digite a velocidade(Km/h) média durante a viagem: \n");
        scanf("%d", &velocidade);

        distancia = tempo * velocidade;

        printf("A distância é de %d Km \n", distancia);

        combustivelGasto = distancia / 12;

        printf("Combustível necessário: %.3f  \n", combustivelGasto);

        return 0;

    }