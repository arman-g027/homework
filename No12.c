#include <stdio.h>


int main(){

    int yo = 0;
    printf("Enter you'r age");
    scanf("%d", &yo);

    int days = yo * 365;

    printf("Days -> %d\n", days);

    return 0;
}
