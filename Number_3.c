#include <stdio.h>
//Write a program which captures the values of a, b, and c from the keyboard and outputs the maximum or minimum. Hence write an algorithm and draw a flow chart.

int main () {

    float a,b,c;

    printf("Enter First, Second and Third Value ");
    scanf("%f %f %f",&a,&b,&c);
    if (a > b && a >c)
    {
        printf("Maximum of %f, %f, and %f is %f\n",a,b,c,a);
    }
    else if (b > c)
    {
        printf("Maximum of %f, %f, and %f is %f\n",a,b,c,b);
    }
    else
    {
        printf("Maximum of %f, %f, and %f is %f\n",a,b,c,c);
    }
    
    return 0;
}
