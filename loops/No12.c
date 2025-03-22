#include <stdio.h>


int main() {

        int num = 0;
        int temp = 0;
        int res = 0;
         printf("Enter the number ");
         scanf("%d", &num);

        while(num > 0){
            res *= 10;
            res += num % 10;
            num /= 10;
      
                temp = res;
        }

        while(temp > 0){
            printf("%d\n", temp % 10);
            temp /= 10;
        }
    
    return 0;
}
