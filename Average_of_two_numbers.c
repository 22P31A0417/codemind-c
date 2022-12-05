#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    float avg;
    //scanf("%f",&avg);
    avg=float(a+b)/2;
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}