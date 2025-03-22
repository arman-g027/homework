#include <stdio.h>

int main() {
    
    int num = 0;
    int res = 0;
     printf("Enter the number\n");
     scanf("%d", &num);

    while(num > 0){
        res *= 10;
        res += num % 10;
        num /= 10;

        if(num <= 0){
        printf("%d", res);        
    }
 }
    return 0;
}
