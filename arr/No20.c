#include <stdio.h>


int main() {
    
    int arr[] = {1, 5, 6, 4, 3, 8, 9, 7, 10};
    int size = sizeof(arr) / sizeof(int);

    int n = size + 1;
    int sum = n * (n + 1) / 2;
    int arr_sum = 0;

    for(int i = 0; i < size; i++) {
            arr_sum += arr[i];
    }
    
    printf("%d\n", sum - arr_sum);


    return 0;
}
