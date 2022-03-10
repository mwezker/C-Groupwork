#include <stdio.h>
//Write a program which computes and prints SUM of squares of even numbers from 1 to 99. Hence write an algorithm and draw a flow chart.
int main()
{
    int a,i;

    for (i = 1; i <= 99; i++)
    {
        if (i%2==0)
        {
            a += i*i;

        }
        
    }
    printf("%d",a);

    return 0;
}
