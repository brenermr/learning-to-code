#include <stdio.h>
 
int main() {
    int valor;
    scanf("%d",&valor);
    if(valor > 0 && valor <= 12)
    {
        if(valor == 1)
        {
            printf("January\n");
        }
        else if(valor == 2)
        {
            printf("February\n");
        }
        else if(valor == 3)
        {
            printf("March\n");
        }
        else if(valor == 4)
        {
            printf("April\n");
        }
        else if(valor == 5)
        {
            printf("May\n");
        }else if(valor == 6)
        {
            printf("June\n");
        }
        else if(valor == 7)
        {
            printf("July\n");
        }
        else if(valor == 8)
        {
            printf("August\n");
        }
        else if(valor == 9)
        {
            printf("September\n");
        }else if(valor == 10)
        {
            printf("October\n");
        }
        else if(valor == 11)
        {
           printf("November\n"); 
        }
        else if(valor == 12)
        {
            printf("December\n");
        }
        
    }
    return 0;
}