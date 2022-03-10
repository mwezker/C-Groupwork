#include <stdio.h>
int main(){
    float LENGTH, WIDTH, HEIGHT,AREA,VOLUME;
    printf("Enter length ");
    scanf("%f", &LENGTH);
    printf("Enter Width ");
    scanf("%f", &WIDTH);
    printf("Enter height ");
    scanf("%f", &HEIGHT);
    VOLUME = LENGTH * WIDTH * HEIGHT;
    AREA = LENGTH * WIDTH;
    printf("Area of base is %f\n",AREA);
    printf("Volume of box is %f\n", VOLUME);
    return 0;


}