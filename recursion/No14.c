#include <stdio.h>

int min_max_arr(int arr[], int size){
        if(size == 1){
            return arr[0];
        }

        int min = min_max_arr(arr + 1, size - 1);
       // int max = min_max_arr(arr + 1, size - 1);
       // return(arr[0] > max) ? arr[0] : max;
        return (arr[0] < min) ? arr[0] : min;
}


int main() {

    int arr[] = {15,28,34,85,687,1,-300};
    int size = sizeof(arr) / sizeof(int);

    printf("%d\n", min_max_arr(arr, size));


    return 0;
}
