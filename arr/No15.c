#include <stdio.h>


int main() {
    
    int arr[] = {15,24,52,61,12,20,11,8,17,83};
    int size = 10;

    int l = 0;

    for(int i = 0; i < size; i++){
          if (arr[i] % 2 == 0){
                int tmp = arr[l];
                arr[l] = arr[i];
                arr[i] = tmp;
                l++;
          }
    }
    
    for(int i = 0; i < size; i++){
            printf("%d\n", arr[i]);
    }

    return 0;
}
