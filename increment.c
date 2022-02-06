#include <stdio.h>

int main (){
    int x = 1, y = 1,a,b,c,d,e;

    printf("++y %d,\n",++y);
    printf("++x %d,\n",++x);
    printf("y++ %d,\n",y++);
    printf("x++ %d,\n",x++);
    a = (++y) + (++y);
    c= +y;
    d = +x;
    b = (++x) + (++x);
    printf("+yy + y++ %d,\n",a);
    printf("++x + x++ %d,\n",b);
    printf("+x %d,\n",c);
    printf("+y %d,\n",d);
    return 0;
    
}