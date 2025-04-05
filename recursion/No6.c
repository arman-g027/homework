#include <stdio.h>

int max_num_baj(int a, int b){
        if(b == 0) return a;

        return max_num_baj(b, a % b);
}


int main(){
    
    int num;
    int num1;

    printf("Enter a first number - ");
    scanf("%d", &num);
    printf("Enter a second number - ");
    scanf("%d", &num1);

    printf("%d ev %d yndhanur amenamec baj ->  %d\n", num, num1, max_num_baj(num, num1));

    return 0;
}
