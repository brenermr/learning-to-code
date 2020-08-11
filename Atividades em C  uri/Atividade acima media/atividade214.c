/*
Exemplo de Entrada
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

Exemplo de saída
40.000%
57.143%
33.333%
66.667%
55.556%

*/

#include<stdio.h>
#include<string.h>

    float porcentagem(float notasAcima, int alunosDaturma);

    int main()
    {
        int alunosDaTurma, i, casos;
        float soma = 0.0; 
        float count = 0.0;// conta as notas acima da média
        scanf("%d", &casos);
        while(casos > 0)
        {
            scanf("%d ", &alunosDaTurma);
            soma = 0.0;
            count = 0.0;
            int notas[alunosDaTurma];
            for (i = 0; i < alunosDaTurma; i++)
            {
                scanf("%d", &notas[i]);
                soma += notas[i];
            }
            soma /= alunosDaTurma;// tira a média
            for(i=0; i < alunosDaTurma; i++)
            {
                if(notas[i] > soma)
                {
                    count++;
                }
            }
            printf("%.3lf%s\n", porcentagem(count, alunosDaTurma), '%');
            //printf("%.3lf%\n", porcentagem(count, alunosDaTurma));
            casos--;
        }
        return 0;
    }

    float porcentagem(float notasAcima, int alunosDaturma)
    {
        float resultado;
        resultado = (notasAcima / alunosDaturma)*100.0;
        return resultado;
    }