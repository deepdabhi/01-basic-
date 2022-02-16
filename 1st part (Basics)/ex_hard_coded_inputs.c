#include <stdio.h>
int main()
{
    // float a , a = 5.6 , this is valid.
    // float a = 5.6 , this is  also valid.
    float a = 5.6;
    printf("This is %f. \n", a);
    float b = 5.6;
    printf("This is %f. \n", b);
    // float c = 5.6;
    // printf ("This is %f %f. \n", c c ); this is invalid.
    float c = 5.6;
    printf("This is %f %f. \n", c, c);
    // float c = 5.6;
    // printf ("This is %f %f. \n", c, c); this is also valid.
    return 0;
}