#include <stdio.h>



int main() {

    
    char arr[10];

            printf("Enter a string -> ");
            scanf("%s", &arr[0]);
 

        for(int i = 0; i < 5; i++){
            if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] ^ 32;
            }
            printf("%c ", arr[i]);
        }


    return 0;
}   
