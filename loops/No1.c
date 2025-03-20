#include <stdio.h>


int main(){

    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
    int a = 0;

    while(a <= 10){
     printf("%d\n", a);
     a++;
    }

    int i = 10;

    do{
     printf("%d\n", i);
     i--;
    }while(i >= 0);
    
    return 0;
}
