#include <stdio.h>

int binar(int arr[], int left, int right, int target){
    if(left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if(arr[mid] == target) {
            return mid;
    } else if(arr[mid] > target) {
            return binar(arr, left, mid - 1, target);
    } else {
            return binar(arr, mid + 1, right, target);
    }

}


int main() {
    
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size = sizeof(arr) / sizeof(int);
    int target;
    int res;

    printf("Enter a searching number - ");
    scanf("%d", &target);

    res = binar(arr, 0, size - 1, target);

    if(res != -1){
            printf("You'r number index is %d\n", res);
    } else {
            printf("I can't find a number index\n");
    }


    return 0;

}
