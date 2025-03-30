#include <stdio.h>


int main() {

    int arr[10];
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++){
        printf("Enter a number - ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size - 1; i++){
        if(arr[i] <= arr[i + 1]){
            printf("No");
            return 0;
        }
    }
    
    printf("Yes");

    return 0;
}
