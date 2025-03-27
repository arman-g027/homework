#include <stdio.h>


int main() {
    
    int arr[5];
    int min;
    int index;

    for(int i = 0; i < 5; i++) {
           printf("Enter a number - ");
           scanf("%d", &arr[i]);
   }
   min = arr[0];

    for(int i = 0; i < 5; i++){
        if(min > arr[i]){
            min = arr[i];
            index = i;
             }
    }
        printf("Lowest number index  %d", index);

    return 0;
}
