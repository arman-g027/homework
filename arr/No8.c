#include <stdio.h>



int main() {
    
        
        int arr1[5];
        int arr2[5];

        for(int i = 0; i < 5; i++){
            printf("Enter a number for first array -");
            scanf("%d", &arr1[i]);
        }

        for(int i = 0; i < 5; i++){
            printf("Enter a number for second array -");
            scanf("%d", &arr2[i]);
        }

        for(int i = 0; i < 5; i++){
                printf("%d\n", arr1[i] * arr2[i]);
        }



    return 0;
}
