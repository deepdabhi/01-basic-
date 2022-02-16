#include <stdio.h>

int main()
{
    int a, b, remainder;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    remainder = a % b;
    printf("Remainder is : %d \n", remainder);
    return 0;
}
// Here, the sign ofthe reaminder will be as per the sign of the a, try it by running it.