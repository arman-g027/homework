#include <stdio.h>


int main(){

    int a;
    int num = 1;
    printf("Enter a number for factorial ");
        scanf("%d", &a);

     for(int i = 1; i <= a; i++) {
        num = i * num; 
        if(i == a){
        printf("%d\n", num);
       }      
      }
    

    return 0;

}
