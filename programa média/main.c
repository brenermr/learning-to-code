#include <stdio.h>
#include <stdbool.h>

 int nota; //nota individual
 int opcao; //opções do menu 
 int qNotas = 0; //quantidade de notas
 int sNotas; //Soma das notas
 float media; //soma das notas dividida pela quantidade de notas


 int main(){
     while (true)
     { //inicio while
         //Menu
         printf("Menu - Digite uma opção \n");
         printf("1- Coletar notas: \n");
         printf("2- Calcular média: \n");
         printf("3- Sair \n");
         //Armazena um valor para a var opcao
         scanf("%d", &opcao);

        //Opções, funções
         if (opcao == 1)
         {
            //Recolhe o valor da quantidade de notas
             sNotas = 0;
             printf("Digite quantas notas serão calculadas:  \n");
             scanf("%d", &qNotas);
             for(int i = 0; i < qNotas; i++)
             {
                //solicita o valor das notas
                 printf("Digite as notas: ");
                //recolhe os valores de cada nota 
                 scanf("%d", &nota);
                 //soma o valor das notas
                 sNotas = sNotas+nota;
                //Divide a soma das notas pela quantidade de notas
                media = sNotas / qNotas;   
             }  

              

         }
         if (opcao == 2)
         {
           //escreve a média 
           printf("Média: %.2f \n", media);
         }
         //fecha a aplicação
         if(opcao == 3)
         {
            return 0;    
         }  
    
     }//fim while
 }