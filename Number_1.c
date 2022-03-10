#include <stdio.h>
//Write a program which captures the values of a, b, and c from the keyboard and computes the value of sum and average.

int main(){

    double a,b,c,avg,sum;
    printf("Enter three numbers a, b and c");
    scanf("%lf %lf %lf", &a,&b,&c);
    sum = a+b+c;
    avg = (a+b+c)/3;
    printf("Average is %lf, Sum is %lf",avg,sum);


    return 0;
}