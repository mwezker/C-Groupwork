#include <stdio.h>
//using visual basic write a program which captures three strings from the keyboard store them in a, b, and c; output them as a single string.
int main ()
{
    char a[256], b[256] ,c[256];

    printf("Enter first string \n");
    gets(a);
    printf("Enter second string \n");
    gets(b);
    printf("Enter third string\n");
    gets(c);

    printf("The combined strings are: ");
    printf("%s %s %s",a,b,c);

    return 0;
}