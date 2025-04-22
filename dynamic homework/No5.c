#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter arr size -> ");
    scanf("%d", &num);
    int* arr = (int*)malloc(num * sizeof(int));

    printf("Enter elements of arr \n");
    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int* result = (int*)malloc(num * sizeof(int));
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 != 0){
            result[count++] = arr[i];
        }
    }

    printf("Our numbers\n");
    for (int i = 0; i < count; i++){
        printf("%d ", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}

