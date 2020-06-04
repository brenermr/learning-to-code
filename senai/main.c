#include <stdbool.h>

bool p = false;
bool q = true;
bool r;

int main({
    r = !(p || q) && (p && q);
    if(r == true){
        printf("Verdade \n");
    } else {
        printf("falso \n");
    }
})