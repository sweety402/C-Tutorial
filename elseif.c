//write a program to find the number that whether the number is even or odd ?
#include<stdio.h>
int main (){
    int number;
    printf("enter the number = ");
    scanf("%d",&number);
    if (number%2==0){
        printf("the given number is even");
    }
    else
    {
        printf("the given number is odd");
    }
    return 0;
}
//Output 1
//enter the number = 125
//the given number is odd
//output 2
//enter the number = 100
//the given number is even
