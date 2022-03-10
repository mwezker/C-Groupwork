#include <stdio.h>
//Write a program which computes and prints SUM of cubes of odd numbers from 1 to 101. Hence write an algorithm and draw a flow chart.
int main() 
{
    int a =0,i;
    for (i = 1; i <= 101; i++)
    {
        if (i%2!=0)
        {
            a += i*i*i;
        }
        
    }
    printf("%d", a);

    return 0;

}