#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_prime(int num);

int main() {

    int size1;
    int size2;

    printf("Enter first arr size -> ");
    scanf("%d", &size1);
     int *arr1 = (int*)malloc(size1 * sizeof(int));

    printf("Enter first arr elements \n");
       for (int i = 0; i < size1; i++){
            scanf("%d", &arr1[i]);
        }

    printf("Enter second arr size -> ");
    scanf("%d", &size2);
    int *arr2 = (int*)malloc(size2 * sizeof(int));

    printf("Enter second arr elements \n");
    for (int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }

        int *res = (int*)malloc((size1 + size2) * sizeof(int));
        int count = 0;

        for(int i = 0; i < size1; i++){
                if(is_prime(arr1[i])){
                    res[count++] = arr1[i];
                }
        }
        
        for(int i = 0; i < size2; i++){
             if(is_prime(arr2[i])){
                    res[count++] = arr2[i];
                }
        }

        for(int i = 0; i < count; i++){
                printf("%d\n", res[i]);
        }

    free(arr1);
    free(arr2);
    free(res);


    return 0;
}

int is_prime(int num) {
    if (num < 2){
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}
