#include <stdio.h>


int main() {

    int arr[5];
    int min;

    for(int i = 0; i < 5; i++){
        printf("Enter a number - ");
        scanf("%d", &arr[i]);
    }
    min = arr[0];

    for(int i = 0; i < 5; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("%d is minimum", min);

    return 0;
}
