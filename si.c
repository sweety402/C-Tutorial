#include"stdio.h"
int si (int principal,int rate,int time){
    int simple_interest=(principal*rate*time)/100;
    return simple_interest;
}
int main(){
    int principal,rate,time;
    printf("enter:pricipal,rate\%,time year");
    scanf("%d,%d,%d",&principal,&rate,&time);
    printf("simple interest:%d",si(principal,rate,time));
    return 0;
}
/*
output 
enter:pricipal,rate %,time year5000,10,5
simple interest:2500
*/
