#include <stdio.h>
#include <math.h>

int main () {

    float a,b,c;
    //float b;
    //float c;
    printf("Enter First, Second and Third Value ");
    scanf("%f,%f,%f",&a,&b,&c);
    /*printf("Enter Second Value ");
    scanf("%f",&b);
    printf("Enter Third Value ");
    scanf("%f",&c);*/
    float d = fmaxf(a,b);
    float e = fminf(a,b);
    printf("Maximum of %f, %f and %f is %f\n",a,b,c,fmaxf(c,d));
    printf("Minimum of %f, %f and %f is %f\n",a,b,c,fminf(c,e));
    return 0;
}
