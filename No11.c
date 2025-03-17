#include <stdio.h>

int main() {

    int time = 0;
    printf("In hours ->");
    scanf("%d",&time);

    int res = time * 60;

    printf("In minutes = %d\n", res);

    return 0;
}
