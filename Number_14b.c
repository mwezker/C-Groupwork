#include <stdio.h>
//Write a program which computes and prints the sum of squares of integers which are divisible by 3 and 5 from 100 to 1. 
int main ()
{
    int a=0,i;

    for (i = 100; i >= 1; i--)
    {
        if (i%3==0 && i%5==0)
        {
            a += i*i;
        }
        
    }
    printf("Sum of cubes is %d", a);

    return 0;
}