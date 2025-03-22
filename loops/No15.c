#include <stdio.h>



int main() {

    int num = 0;
    int flag = 1;
     printf("Enter the number ->");
     scanf("%d", &num);
    
    if(num <= 1){
        printf("%d is not a Prime number", num);
    } else {

            for(int i = 2; i <= num / 2; i++){
               if(num % i == 0){
                   flag = 0;
                }
            }

        if(flag){
            printf("%d is Prime number\n", num);
        } else {
            printf("%d is not a Prime number\n", num);
        }
}
    return 0;
}
