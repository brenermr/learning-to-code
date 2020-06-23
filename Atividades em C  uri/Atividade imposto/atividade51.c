/*
==== RENDA ====            IMPOSTO DE RENDA
DE 0.00  A R$ 2000.00        ISENTO
DE R$ 2000.01  A R$ 3000.00  8%
DE 3000.01  A R$ 4500.00     18%
ACIMA DE R$ 4500.00          28%

*/

#include<stdio.h>
    
    
    double salario[2];
    void classificar();

    int main ()
    {
        

        scanf("%lf", &salario[0]);
        classificar();
        return 0;
        
    }

    void classificar()
    {
        double total;
        if(salario[0] >= 0.00 && salario[0] <= 2000.00)
        {
            printf("Isento\n");
        }else if(salario[0] >= 2000.01 && salario[0] <= 3000.00)
        {
            
            total = (salario[0]-2000)*0.08;
            printf("R$ %.2lf\n", total);

        }else if(salario[0] >= 3000.01 && salario[0] <= 4500.00)
        {
           
            total = (1000*0.08) + ((salario[0]-3000)*0.18);
            printf("R$ %.2lf\n", total);
        }else if(salario[0] > 4500.00)
        {
            
            total = (1000*0.08)+(1500*0.18)+ ((salario[0]-4500)*0.28);
            printf("R$ %.2lf\n", total);
        }
    }

