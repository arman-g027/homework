#include <stdio.h>

long long factorial(int num){
        long long result = 1;

        for(int i = 1; i <= num; i++){
                result *= i;
        }

        return result;
}

long long factorial_recursion(int num) {
        if(num == 0) {
            return 1;
        }
        return num * factorial_recursion(num - 1);
        
}



int main() {
    
    printf("%lld\n", factorial_recursion(5));

    return 0;
}
