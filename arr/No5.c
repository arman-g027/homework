#include <stdio.h>


int main() {
    
    int arr[5];
    int min;
    int max;

    for(int i = 0; i < 5; i++) {
          printf("Enter a number - ");
          scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
        for(int i = 0; i < 5; i++){
            if(min > arr[i]){
                min = arr[i];
            }
            if(max < arr[i]){
                max = arr[i];
            }
        }

    printf("Min + Max = %d", min + max);


    return 0;
}
