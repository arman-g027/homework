#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;
    int res = 0;
    char z = 'a';
     
    printf("Enter the first number -> ");
     scanf("%d",&x);
    printf("Enter the second number -> ");
     scanf("%d",&y);


       if(x == 0 || y == 0) {
            printf("You can't enter 0 \n");
     }  else {
        printf("Enter operation -> ");
        scanf(" %c",&z);
    
                 // printf("Enter everything!\n");
                 //scanf("%d %c %d", &x, &z, &y);     navsyaki pajarni

    if(z == '+'){
        printf("x + y = %d\n", x + y);
    } else if (z == '-') {
        printf("x - y = %d\n", x - y);
    } else if (z == '*'){
        printf("x * y = %d\n", x * y);
    } else if(z == '/'){
        printf("x / y = %d\n", x / y);
    } else if(z == '^') {
       int i = 0;
       res = x;
           while (i < y) {
           res = res * x;
           i++;
        }
        printf("x ^ y = %d\n", res);
    }
 }
    return 0;

}
