#include <stdio.h>

int main()
{
    float c, f;
    printf("Tempreature value in celcius : \n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Tempreature value in farenhit is %f : \n", f);
    return 0;
}