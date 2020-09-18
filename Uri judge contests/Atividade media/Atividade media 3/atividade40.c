/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, 
correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, 
respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". 
Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, 
imprima a mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, 
o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. 
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
 Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). 
 e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.",
  (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) 
  apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

Entrada
A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.
*/
#include<stdio.h>
    int main()
    { 
        double nota[5];
        double media, mediaFinal;
        scanf("%lf %lf %lf %lf",&nota[0],&nota[1],&nota[2],&nota[3]);
        media = ((nota[0]*2) + (nota[1]*3) + (nota[2]*4) + (nota[3]*1)) / 10;
        if(media >= 5.0)
        {   
            if (media >= 7.0)
            {
                printf("Media: %.1lf\n", media);
                printf("Aluno aprovado.");
            }
            if (media >= 5.0 && media <= 6.9)
            {
                printf("Media: %.1lf", media);
                printf("Aluno em exame.\n");
                scanf("%lf", &nota[4]);
                printf("Nota do exame: %.1lf\n", nota[4]);
                mediaFinal = (nota[4] + media) / 2;
                if (mediaFinal >= 5.0)
                {
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1lf\n", mediaFinal);
                }else
                {
                    printf("Aluno reprovado.\n", mediaFinal);
                    printf("Media final: %.1lf\n", mediaFinal);   
                }   
            }
        }else
        {
            printf("Media: %.1lf\n", media);
            printf("Aluno reprovado.\n");
        }        
        return 0;
    }