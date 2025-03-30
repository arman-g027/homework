#include <stdio.h>


int main() {
    
    int arr[5];
    int count = 0;


    for(int i = 0; i < 5; i++){
        printf("Enter a number");
        scanf("%d", &arr[i]);

        if(arr[i] % 2 != 0){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
