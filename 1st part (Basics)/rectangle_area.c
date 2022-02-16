#include <stdio.h>

int main()
{
    float l, b, a;
    printf("Length of the reactangle : \n", l);
    scanf("%f", &l);
    printf("Length of the breadth : \n", b);
    scanf("%f", &b);
    a = l * b;
    printf("Area of rectangle is %f: \n", a);
    return 0;
}