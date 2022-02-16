#include <stdio.h>

int main()
{
    float r, i, p, n;
    printf("Principle : \n", p);
    scanf("%f", &p);
    printf("rate : \n", r);
    scanf("%f", &r);
    printf("number of years : \n", n);
    scanf("%f", &n);
    i = (p * r * n) / 100;
    printf("Interst is %f: \n", i);
    return 0;
}