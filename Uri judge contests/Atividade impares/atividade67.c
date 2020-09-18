/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha,
inclusive o X, se for o caso.

Entrada
O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.

Exemplo de Entrada	Exemplo de Saída
8
*/

#include <stdio.h>
 
int main() {
    int valor;
    int impares[1000];
    int i=0;
    int p=0;
    scanf("%d",&valor);
    
    for(i=1;i<=valor;i++){
        if(i%2!=0){
            impares[p]=i;
            p++;
        }
    }
    
    for(i=0;i<p;i++){
        printf("%d\n",impares[i]);
    }
    
    return 0;
}