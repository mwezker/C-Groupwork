#include <stdio.h>
int main(){
    float LENGTH, WIDTH, HEIGHT;
    printf("Enter length ");
    scanf("%f", &LENGTH);
    printf("Enter Width ");
    scanf("%f", &WIDTH);
    printf("Enter height ");
    scanf("%f", &HEIGHT);
    printf("Area of base: Length X Width is %f\n",LENGTH*WIDTH);
    printf("Volume of box: Length X Width X Height is %f\n", LENGTH*WIDTH*HEIGHT);
    return 0;


}