#include <stdio.h>
//14.Write down a program which computes and prints the following integers. 1, 8, 27, 64, 125, 256. 

int main() 
{
    int a = 1,b = 256,i;
    for (i = 1; i <= 5; i++)
    {
        a = i*i*i;
        printf("%d, ", a);
        
    }
    printf("%d", b);

    return 0;

}