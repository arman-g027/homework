#include <stdio.h>


int main() {
    
    char ch;

    printf("Enter a letter ");
       scanf("%c", &ch);

        
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                printf("%c - Dzaynavor tar \n", ch);
                break;
            default:
                printf("%c - Baxadzayn tar \n", ch);
        }


     return 0;
}
