#include <stdio.h>

int main()
{
    int num;
    
    printf("ENter number ->");
    scanf("%d", &num);
    
    int res = 4 * num + 21 * num * num - 12;
    printf("%d\n", res);
    
    return 0;
}
