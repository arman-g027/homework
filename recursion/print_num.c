#include <stdio.h>

void print_num(int num);
void zero_to_num(int num);
void arr_foo(int arr[], int size);
void arr2_foo(int arr[], int size);
int digits_add(int num); 
int fibonachi(int num);

int main() {

    //print_num(10);
    //zero_to_num(10);
    int num = 5;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(int);
    //arr_foo(arr, size);
    //arr2_foo(arr, size);
    //printf("%d\n", digits_add(num));
    printf("%d\n", fibonachi(num));

    return  0;

}


void print_num(int num){
    
    if(num < 0) return;

    printf("%d\n", num);
    print_num(num - 1);

}

void zero_to_num(int num){
        
    if(num < 0) return;

       zero_to_num(num - 1);
       printf("%d\n", num);


}

void arr_foo(int arr[], int size){
        if(size < 0) return;
        
        printf("%d\n",arr[size - 1]);
        arr_foo(arr, size - 1);
}

void arr2_foo(int arr[], int size){
        if(size <= 0) return;
            
        arr2_foo(arr, size - 1);
        printf("%d\n", arr[size - 1]);
}

int digits_add(int num){
        if(num <= 0) return 0;
        
        return num % 10 + digits_add(num / 10);
}

int fibonachi(int num){
        if(num == 0 || num == 1) {
            return 1;
         } 

        return fibonachi(num - 1) + fibonachi(num - 2);
}

