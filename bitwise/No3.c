#include <stdio.h>


int main(){


    int num;
    int count = 0;
    int size = sizeof(int) * 8;

     printf("Enter a number -> ");
     scanf("%d", &num);

     for(int i = 1; i <= size; i++){
        if((num & 1) == 0){
            count++;
           }
           num >>= 1;
     }

     printf("we have %d (0)",count);

    return 0;
}
