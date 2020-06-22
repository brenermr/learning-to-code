#include <stdbool.h>
#include <stdio.h>

// p=x \ q=y

bool p = true;
bool q = false;
bool r;

//tabela verdade "ou exclusivo"
/*
    | X | Y | XY |
    | f | f |  f |
    | v | f |  v |
    | f | v |  v |
    | v | v |  f |
    
    Verdade quando as preposições forem diferentes
*/


int main(){
    r = ((p || q) && !(p && q));
    if(r == true){
        printf("Verdade \n");
    } else {
        printf("falso \n");
    }

    return 0;
}