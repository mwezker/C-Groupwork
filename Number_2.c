#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d,e,x;
    printf("Enter three numbers a, b and c");
    scanf("%f%f%f", &a,&b,&c);
        e = (b*b)-(4*a*c);
    if (e<0)
    {
        d = sqrt(e);
        x=((-b+d)/(2*a*c));
        printf("X = %f",x);

        return 0;
    };
    printf(" Because b^2 is less than 4*a*c the square root of b^2-4ac is imaginary, try again");
    
    return 0;
}