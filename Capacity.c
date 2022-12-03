#include<stdio.h>
int cap(int s,int b,int t)
{
    int a;
    a=s*b*t;
    return a;
}
int main()
{
    int s,b,t;
    scanf("%d%d%d",&s,&b,&t);
    int x=cap(s,b,t);
    printf("%dkb",x);
}