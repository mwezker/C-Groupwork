#include <stdio.h>
#include <math.h>

int main (){
int n = 6, sum;

for(int i=0; i<=n; i=i+2)
  {
     sum += (i*i);
  }

  printf("Sum of squares of even numbers from 1 to 100 is = %d", sum);
    
}