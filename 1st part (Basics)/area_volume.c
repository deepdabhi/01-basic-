#include <stdio.h>

int main()
{
    float v, r1, r2, h, pi, a1, a2;
    pi = 3.14;

    printf("Radius of circle : \n");
    scanf("%f", &r1);
    a1 = pi * r1 * r1;
    printf("Area of circle is : %f \n", a1);

    printf("Radius of cylinder : \n");
    scanf("%f", &r2);
    printf("Height of cylinder : \n");
    scanf("%f", &h);
    a2 = pi * r2 * h;
    printf("Area of cylinder is : %f \n", a2);
    v = pi * r2 * r2 * h;
    printf("Volume of cylinder is : %f \n", v);

    return 0;
}