#include "stdio.h"


void foo(int *a) {
    *a = *a + 1; 
}

void main(void) {
    int a = 0; 

    while (1) {
        foo(&a); // chama funcao que acessa variavel global
        
        if (a > 5) {
            int b = 1;
            printf("a: %d, b: %d\n", a, b);
        }
    }
}
