#include <stdio.h>

int main()
{
    int a, b, quotient, remainder;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    quotient = a / b;
    remainder = a % b;
    printf("On deviding a and b the quotient is %d and remainder is %d. \n", quotient, remainder);
    printf("Hence %d = %d * %d + %d. \n", a, b, quotient, remainder);
    return 0;
}