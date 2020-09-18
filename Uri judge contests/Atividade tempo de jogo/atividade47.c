
/*
Timelimit: 1
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

Exemplo de Entrada	Exemplo de Saída
7 8 9 10
tempo_horatotal = final - Hora_inicio;

    if (tempo_horatotal < 0)
    {
        tempo_horatotal = 24 + (final - Hora_inicio);
    }
    ACEITO NO URI
*/
#include <stdio.h>
    //global var
    int tempo[3][2];//linha- 0-inicio 1-final 2-total  --- coluna- 0-horas 1-minutos
    //funções
    void lerValor();
    void calcula();
    void verificaCondicao();
    void imprime();
    
    //main
    int main()
    {
        lerValor();
        calcula();
        verificaCondicao();
        imprime();
        return 0;
    }
    
    //Estrutura das funções
    void lerValor()
    {
        scanf("%d%d%d%d",&tempo[0][0], &tempo[0][1],&tempo[1][0],&tempo[1][1]);
    }
    void calcula()
    {
        //conversão de horas em minuto
        int totalInicio, totalFim, diferencaTotal;
        totalInicio = (tempo[0][0] * 60) + tempo[0][1];
        totalFim = (tempo[1][0] * 60) + tempo[1][1];

        //calcula a diferença total  de minutos
        diferencaTotal = (24*60-totalInicio) + totalFim;

        //divide a diferença em Horas
        tempo[2][0] = diferencaTotal / 60;
        //o resto são os minutos
        tempo[2][1] = diferencaTotal % 60;
    }
    void verificaCondicao()
    {
        if (tempo[2][0] >= 24 && tempo[2][1] >= 1)
        {
            tempo[2][0] = tempo[2][0] % 24;
        }    
    }
    void imprime()
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo[2][0], tempo[2][1]);
    }
