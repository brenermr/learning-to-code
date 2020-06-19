#include <stdio.h>
int valor[2]; 
int count;
int main() {
    int i;
    scanf("%d%d", &valor[0], &valor[1]);
    for(i= 0; i <= valor[1]; i++)
    {
        if(count == valor[1])
        {
            printf("Nao sao Multiplos\n");
        }
        if(i * valor[0] == valor[1])
        {
            printf("Sao Multiplos\n");
        }else
        {
            count++;
        }
    }
    return 0;
}