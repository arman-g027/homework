#include <stdio.h>



int main() {
        
        int arr[5];

        for(int i = 0; i < 5; i++){
            printf("Enter a number");
            scanf("%d", &arr[i]);

            arr[i] /= sizeof(arr) / sizeof(int);
        }

        for(int i = 0; i < 5; i++){
                printf("%d\n", arr[i]);
        }


    return 0;
}
