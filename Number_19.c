#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    float a,b,c,d,e,f,g,h,i,j,k,l,x;
    printf("Enter first number ");
    scanf("%f",&a);
    printf("Enter second number ");
    scanf("%f",&b);
    printf("Enter third number ");
    scanf("%f",&c);
    printf("Enter fourth number ");
    scanf("%f",&d);
    e =pow(a,5);
    f = pow(b,5);
    g = pow(c,5);
    h =pow(d,5);
    i = (a + b + c +d)/4;
    // i = average(a,b,c,d);
    j = fmax(a,b);
    k = fmax(b,c);
    l = fmax(k,l);
    x = sqrt((e + f + g)/h);
    printf("Maximum is %f \n",l);
    printf("Average is %f \n", i);
    printf("X is %f \n", x);
    // printf("%f \n %f",a,e);
    return 0;
}