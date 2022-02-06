#include <stdio.h>
#include <math.h>
int main(){
    float cuberoot, num;
   
    //printf("cbrt(729) = %f\n", cbrt(729));
    printf("Enter number ");
    scanf("%f",&num);
    cuberoot = cbrt(num);
    printf("Cuberoot is %f \n",cuberoot);
    printf("Cuberoot is %g \n",cuberoot);
    printf("Cuberoot is %e \n",cuberoot);
    printf("Cuberoot is %u \n",cuberoot);
    printf("Cuberoot is %d \n",cuberoot);
    return 0;

}