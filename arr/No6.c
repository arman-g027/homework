#include <stdio.h>



int main() {

        int arr[5];
        int sum1 = 0;
        int sum2 = 1;

        for(int i = 0; i < 5; i++){
            
                printf("Enter a number - ");
                scanf("%d", &arr[i]);
                
                sum1 += arr[i];
                sum2 *= arr[i];
        }
        
        printf("%d is +, %d is *", sum1, sum2);

    return 0;
}
