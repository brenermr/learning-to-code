#include <stdio.h>
#include <stdbool.h>

int number;
int qnt = 0;



int main(void)
{
    while(true)
    {
        printf("Escreva um número: \n");       
        scanf("%d", &number);
        for (int i = 1; i <= number; i++)
        {
            if(number % i == 0)
            {
             qnt++;   
            }   
        }
        if(qnt == 2)
        {
            printf("O número %d é primo \n",  number);
        } else
        {
            printf("O número %d não é primo \n", number);
        }
        
      
    }    
     return 0;

}
