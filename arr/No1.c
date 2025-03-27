#include <stdio.h>



int main() {
    
    int arr[5];
    int max;

    for(int i = 0; i < 5; i++){
        printf("Enter a number - ");
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];

    for(int i = 0; i < 5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("%d is max number", max);


    return 0;
}
