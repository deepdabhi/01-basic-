#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a : \n");
    scanf("%d", &a);
    printf("Enter b : \n");
    scanf("%d", &b);
    printf("Before swapping value of a is %d and value of b is %d. \n", a, b);
    // a=c;
    // b=a;
    // c=b; This are  wrong.
    c = a;
    printf("%d\n", a);
    a = b;
    printf("%d\n", a);
    b = c;
    printf("After swaping value of a is %d and value of b is %d. \n", a, b);
    return 0;
}