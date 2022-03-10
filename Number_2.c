#include <stdio.h>
#include <math.h>
//Write a program which captures the values of a, b, and c from the keyboard and computes the value of x; where x= (-b +√ (b^2-4ac))/2a.
int main(){

    double a,b,c,d,e,x;
    printf("Enter value a ");
    scanf("%lf",&a);
    printf("Enter value b ");
    scanf("%lf",&b);
    printf("Enter value c ");
    scanf("%lf",&c);
   
    e = (b*b)-(4*a*c);
   
    if (e>=0)
    {
        d = sqrt(e);
        x=((-b+d)/(2*a*c));
        printf("X = %lf",x);

    }
    else {
    printf(" Because b^2 is less than 4*a*c the square root of b^2-4ac is imaginary, try again");
    }
    return 0;
}