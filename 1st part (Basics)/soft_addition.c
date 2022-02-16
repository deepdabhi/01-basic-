#include <stdio.h>
int main()
{
    float a, b, sum;
    printf("Enter the value of a \n");
    scanf("%f", &a);
    printf("Enter the value of b \n");
    scanf("%f", &b);
    sum = a + b;
    printf("The summation of a and b is : %f. \n", a + b);
    return 0;
}