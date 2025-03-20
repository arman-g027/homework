#include <stdio.h>

int main()
{

    float celsius;
    printf("Type Celsius ->");
    scanf("%f", &celsius);
    
    float farenheit = (celsius * 9/5) + 32;
    printf("In Farenheit -> %f\n",farenheit);

    return 0;
}
