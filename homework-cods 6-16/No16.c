#include <stdio.h>


int main() {

    int a;
    int b;
    printf("Enter first number ->");
     scanf("%d", &a);
    printf("Enter second number ->");
     scanf("%d", &b);
    
    int res;

    if(a > b) {
       res = a % b;
    } else {
        res = b % a;
    }

    printf("Mnacord = %d\n", res);


    return 0;
}
