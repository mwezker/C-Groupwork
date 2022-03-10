#include <stdio.h>
#include <math.h>
/*
Write a program which captures two integers from keyboard, computes and prints the following: 
i.	The product
ii.	The average
iii.	The maximum value
iv.	The minimum value
v.	The absolute value between the two integers.

*/
int main (){
    int a,b,c,d,e,f,g;
    printf("Enter first integer");
    scanf("%d",&a);
    printf("Enter second integer");
    scanf("%d",&b);
    c = a*b;
    d = (a+b)/2;
    e = fmax(a,b);
    f = fmin(a,b);
    g = abs(a-b);
    printf("The product of the two values is %d \n", c);
    printf("The average of the two values is %d \n", d);
    printf("The maximum of the two values is %d \n", e);
    printf("The minimum of the two values is %d \n", f);
    printf("The absolute between the two values is %d \n", g);
    
    return 0;


}