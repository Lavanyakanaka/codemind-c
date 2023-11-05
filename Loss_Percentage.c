#include<stdio.h>
int main()
{
    int x,y;
    double a,b;
    scanf("%d%d",&x,&y);
    a = x-y;
    b = (a/x)* 100.0;
    printf("%.2f",b);
}