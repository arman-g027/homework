#include <stdio.h>

int main() 
{
    int kg;
    int m;

    printf("Type you'r kg ->");
    scanf("%d",&kg);
    printf("Type you'r height ->");
    scanf("%d",&m);
    
    double bmi = kg /(m * m);
    
    printf("You'r BMI -> %f\n",bmi);

    return 0;
}
