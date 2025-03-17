#include <stdio.h>

int main() {
    float a = 1;
    float b = 1;
    float c = 1;
    
    printf("Enter a numbers");
     scanf("%f", &a);
     scanf("%f", &b);
     scanf("%f", &c);

    float res = (a + b + c) / 3;
    printf("Average = %f", res);
    
    return 0;
}
