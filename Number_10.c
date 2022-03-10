#include <stdio.h>
//Write a program which computes and prints SUM of cubes of odd numbers from 0 to 

int main() {
    int a = 0,i;
    for (i = 0; i <= 100; i++)
    {
        if (i%2!=0)
        {
            a += i*i*i;
        }
        
    }
    printf("%d", a);

    return 0;

}