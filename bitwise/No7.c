#include <stdio.h>


int main() {

    
    int num;
     printf("Enter a number - >");
     scanf("%d", &num);
    int index;
     printf("Enter index - >");
     scanf("%d", &index);

         num >>= index;

     if((num & 1) == 1){
         printf("Arden 1 a");
     } else {
         printf("Poxvec");
     }

    return 0;
}
