#include <stdio.h>
 
int main() {
    int vetor[5];
    int i,total;
    
    for(i=0;i<5;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]%2==0){
            total++;
        }
    }
    printf("%d valores pares\n",total);
    
    return 0;
}