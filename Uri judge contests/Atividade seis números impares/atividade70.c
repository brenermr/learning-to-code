/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
 um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.

Exemplo de Entrada	Exemplo de Saída
8
*/
#include <stdio.h>
 
int main() {
    int valor;
    int impares[6]   ;
    int i;
    int p=0;
    scanf("%d",&valor);
    
    while(p<6){
        if(valor%2!=0){
            impares[p]=valor;
            p++;
        }
        valor++;
    }
 
    for(i=0;i<p;i++){
        printf("%d\n",impares[i]);
    }
    
    return 0;
}