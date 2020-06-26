/*
Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral.
O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando 
se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida 
a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

Entrada
O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas válidas, deve ser lido um valor inteiro X .
O programa deve parar quando o valor lido para este X for igual a 2.

Saída
Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”.
Quando duas notas válidas forem lidas, deve ser impressa a mensagem “media = ” seguido do valor do cálculo.
Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada
novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.
A média deve ser impressa com dois dígitos após o ponto decimal.
*/

#include<stdio.h>
    double nota[2];
    int opcao;
    

    void readNotes();
    void printAverage();
    void decision();
    
    int main ()
    {   
       opcao = 1;
       while(opcao == 1)
       { 
           if (opcao == 2)
           {
               break;
           } 
            readNotes();
            printAverage();
            decision();
            
            
       } 
        return 0;   
    }
    
   
    void decision()
    {
        int i,answer; 
        answer = 0;
        for (i = 0; answer <= 0; i++)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%i", &opcao);
                if (opcao == 1 || opcao == 2)
                {
                    answer++;
                }  
            }
    }
    
    void printAverage()
    {
        double media;
        media = (nota[0] + nota[1]) / 2;
        printf("media = %.2lf\n", media);
        media = 0;
    }
    
    
    void readNotes()
    {
        double valor;
        int off, i;
        int count = 0;
        off = 0;

        for(i=0; off <= 0; i++)
        {
            scanf("%lf", &valor);
            if (valor >= 0.0 && valor <= 10.0)
            {
                if(count  > 0)
                {
                    nota[1] = valor;
                    off++;
                }
                if (count == 0)
                {
                    nota[0] =  valor;
                    count++;
                }
                
            }else if (valor < 0.0 || valor > 10.0)
            {
                printf("nota invalida\n");
                off = 0;
            }        
        }
    }

  