#include <stdio.h>

int fact(int num){
        if(num == 1) {
            return num;
        } else if(num == 0) {
            return 0;
        }
    
    return num * fact(num - 1);

}


int main() {
    
    int num;

    printf("Enter a number - ");
    scanf("%d", &num);
   
     printf("%d factorial = %d", num, fact(num));

    return 0;
}
