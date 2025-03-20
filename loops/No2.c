#include <stdio.h>


int main() {
    
    int a;
    int b;

    printf("Enter fist number");
     scanf("%d", &a);
    printf("Enter second number");
     scanf("%d", &b);   

     if(a > b){
        int temp = a;
        a = b;
        b = temp;
     }

    while(a <= b){
        printf("%d ",a);
        a++;
      }

    return 0;
}
