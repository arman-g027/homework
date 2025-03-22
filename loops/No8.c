#include <stdio.h>


int main() {

    for(int i = 1; i <= 10; i++){
        printf("%d Table \n", i);
        for(int j = 2; j <= 9; j++){
                printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
