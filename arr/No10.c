#include <stdio.h>


int main(){

        int arr[5];
        double sum = 0;

        for(int i = 0; i < 5; i++){
                printf("Enter a number - ");
                scanf("%d", &arr[i]);
                sum += arr[i];
        }

        sum /= sizeof(arr) / sizeof(int); 
    
        printf("%lf\n", sum);

    

    return 0;
}
