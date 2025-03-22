#include <stdio.h>




int main() {

    int num = 0;
     printf("Enter number 1-9 ->");
     scanf("%d", &num);

    for(int i = 1; i < 9; i++){    
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
