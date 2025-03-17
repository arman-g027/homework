#include <stdio.h>


int main() {
    
    int num = 0;
    
    printf("Type any number");
    scanf("%d", &num);
    
    if(num > 0) {
        printf("%d\n", num);
    } else {
        num = -num;
        printf("%d\n", num);
    }


    return 0;
}
