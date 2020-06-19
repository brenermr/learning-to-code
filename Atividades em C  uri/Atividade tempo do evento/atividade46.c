#include <stdio.h>
 
int main() {
 
    int start, end, duration;
    
    scanf("%d %d", &start, &end);
    if(start >= end)
    {
        duration =(24 - start ) + end;
    }else
    {
        duration = end - start;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}