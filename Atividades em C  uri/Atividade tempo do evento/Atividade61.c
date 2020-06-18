/*
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril,
iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar,
uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias,
 você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”,
seguido de um espaço e o dia do mês no qual o evento vai começar. 
Na linha seguinte, será informado o momento no qual o evento vai iniciar, 
no formato hh : mm : ss.
Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas,
indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplo de Entrada	Exemplo de Saída
                    3 dia(s)
                    22 hora(s)
                    1 minuto(s)
                     0 segundo(s)
Dia 5   
08 : 12 : 23
Dia 9
06 : 13 : 23


*/
#include<stdio.h>  
#include<string.h>

    int main()
    { 

        char texto[10];
        int inicio[4];// [0]dia, [1]hora, [2]minuto, [3]segundo
        int fim[4];// [0]dia, [1]hora, [2]minuto, [3]segundo
        int segundosInicio, segundosFim, segundosTotal,

        scanf("%s %d", texto, &inicio[0];
        scanf("%d %s %d %s %d",&inicio[0];

    }