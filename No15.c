#include <stdio.h>


int main() {

    int a = 0;
    int b = 0;
   
    printf("Enter first number ->");
     scanf("%d", &a);
    printf("Enter second number ->");
     scanf("%d", &b);

    int gumar = a + b;
    int hanum = a - b;
    int bazm = a * b;
    int baj = a / b;

    printf("Gumar ->  %d\n", gumar);
    printf("Hanum ->  %d\n", hanum);
    printf("Bazmapatkum ->  %d\n", bazm);
    printf("Bajanum ->  %d\n", baj);

    return 0;

}
