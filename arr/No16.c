#include <stdio.h>

int main() {

        int arr1[] = {1,2,3,4,5,6,7,8,9,10};
        int arr2[] = {1,2,2,4,5,6,7,8,9,10};
        int flag = 0;

        for(int i = 0; i < 10; i++){
            if(arr1[i] == arr2[i]){
                flag = 1;
            } else {
                printf("False");
                return 0;
            }
        }
        if(flag) {
            printf("True\n");
        }

    

    return 0;
}
