#include <stdio.h>
//Write a program code using c/vb language, which computes and prints the sum of squares of numbers from 11 to 3. 
int main (){
    int a = 0,i;
    for (i = 11; i > 2; i--)
    {
        a += i*i;
    
    }
  
    printf("Sum of squares is %d\n",a);
 
    return 0;
}