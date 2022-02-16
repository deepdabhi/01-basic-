#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a charcter : \n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Entered character is a lower case.\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Entered character is an upper case.\n");
    }
    else if (ch >= '1' && ch <= '9')
    {
        printf("Entered charcter is a number. \n");
    }
    else
    {
        printf("Invalid input. \n");
    }

    return 0;
}