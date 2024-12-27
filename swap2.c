// write a program to swap two number without using third variable
#include "stdio.h"
int main ()
{
    int a = 10;
    int b = 5;
    a = a-b;
    b = b+a;
    // printf("a=%d\n",a);
    // printf("b=%d",b);
    printf("a:%d,b:%d",a,b);
    return 0;
}


// output
// a:5,b:10
