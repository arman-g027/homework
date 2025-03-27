#include <stdio.h>


int main(){

        int arr[5];
        int max;
        int index;

        for(int i = 0; i < 5; i++){
                printf("Enter a number - ");
                scanf("%d", &arr[i]);
        }
        
        max = arr[0];

        for(int i = 0; i < 5; i++){
                if(max < arr[i]){
                     max = arr[i];
                     index = i;
                }
        }

    printf("Greatest number index %d", index);

    return 0;
}
