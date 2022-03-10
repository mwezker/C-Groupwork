#include <stdio.h>
//Write a method using c/vb language which computes and returns the cube of odd numbers from 1 to 100. Hence write an algorithm and draw a flow chart.
int main(){
    int a;
    for (int i = 1; i <= 100; i++)
    {   
        if (i%2!=0)
        {
            a = i*i*i;
            printf("%d\n",a);
        }
        

    }
    return 0;
}