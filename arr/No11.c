#include <stdio.h>


int main(){

        int arr[5];
        int flag = 0;

        for(int i = 0; i < 5; i++){
            printf("Enter a number - > ");
            scanf("%d", &arr[i]);
        }

        int num = 0;
        
        printf("stugvox tivy nshel ->");
        scanf("%d", &num);

        for(int i = 0; i < 5; i++){
            if(arr[i] == num) {
                flag = 1;
               }
        }
        if(flag) {
            printf("YES");
         } else {
            printf("NO");
         }

    return 0;
}
