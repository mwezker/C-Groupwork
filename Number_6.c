#include <stdio.h>
int main(){
    int a;
    for (int i = 1; i < 100; i=i+2)
    {
        a = i*i*i;
        printf("%d\n",a);
    }
    return 0;
}