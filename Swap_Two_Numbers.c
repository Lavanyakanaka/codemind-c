#include<stdio.h>
int main()
{
    float a,b,t;
    scanf("%f%f",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%.f
%.f",a,b);
}