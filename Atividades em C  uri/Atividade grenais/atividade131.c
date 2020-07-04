/*
Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente.
Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem
ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento,
conforme o exemplo abaixo.

*/
#include<stdio.h>
  int main()
  {
      int i;
      int inter;
      int gremio;
      int grenais = 0;
      int empate = 0;
      int vitoria[2] = {0,0};

      for (i = 0; i >= 0; i++)
      {
          
          scanf("%i %i", &inter, &gremio);
          grenais++;
          if (inter > gremio)
          {
              vitoria[0]++;
          }else if (inter < gremio)
          {
              vitoria[1]++;
          }else if (inter == gremio)
          {
            empate++;  
          }    
          
        int opcao = 0;
        while (opcao != 1 || opcao != 2)
        {
            printf("Novo grenal: (1-sim 2-nao)\n");
            scanf("%i", &opcao);
            if (opcao == 1 || opcao == 2)
            {
                break;
            }
        }
        if (opcao == 2 )
        {
            break;
        }
        
            

      }
      printf("%i grenais\n", grenais);
      printf("Inter:%i\n", vitoria[0]);
      printf("Gremio:%i\n", vitoria[1]);
      printf("Empates:%i\n", empate);
      if (vitoria[0] > vitoria[1])
      {
          printf("Inter venceu mais\n");
      }else if (vitoria[0] < vitoria[1])
      {
          printf("Gremio venceu mais\n");
      }else if (vitoria[0] == vitoria[1])
      {
          printf("Nao houve vencedor\n");
      }
      return 0;
  }