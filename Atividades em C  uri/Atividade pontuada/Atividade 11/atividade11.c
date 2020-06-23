#include<stdio.h>
    
    void imprimir();
    
    
    int main()
    {   
        int matriz[2][8];
        int *ponteiro;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
            {
                ponteiro = &matriz[i][j];
                printf("Var value= %d\n Memory address= %p\n", matriz[i][j], ponteiro);
            }
            
        }
        
        
        return 0;
    }


 