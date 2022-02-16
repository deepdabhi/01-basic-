#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;
    double d;
    long double l;
    printf("Size of char = %d bytes. \n", sizeof(c));
    printf("Size of integer = %d bytes. \n", sizeof(i));
    printf("Size of float = %d bytes. \n", sizeof(f));
    printf("Size of double = %d bytes. \n", sizeof(d));
    printf("Size of long double = %d bytes. \n", sizeof(l));
    return 0;
}