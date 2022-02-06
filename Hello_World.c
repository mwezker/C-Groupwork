#include <stdio.h>

int main (){
    int integer1 = 5, integer2 = 20, sum;
    printf("Enter integer1 ");
    scanf("%d", &integer1);
    printf("Enter interger2 ");
    scanf("%d",&integer2);
    sum = integer1+integer2;
    printf("Sum of integers 1 and 2 is %d",sum);

    
    return 0;
}