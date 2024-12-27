// write a program to swap two number using third variable .
#include"stdio.h"
int main()
{
    int a = 10;
    int b = 5;
    int c = b;
        b = a;
        a = c;
        printf("a:%d,b:%d",a,b);
        return 0;
}

// output
// a:5,b:10
