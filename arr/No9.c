#include <stdio.h>


int main() {

        int arr[5];

        for(int i = 0; i < 5; i++){
            printf("Enter a number -> ");
            scanf("%d", &arr[4 - i]);
        }

        for(int i = 0; i < 5; i++){
                printf("%d\n", arr[i]);
        }


    return 0;
}
