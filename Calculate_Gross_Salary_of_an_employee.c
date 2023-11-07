#include<stdio.h>
int main()
{
    float s,h,d,g,p;
    scanf("%f%f%f",&s,&h,&d);
    p = (12*s)/100;
    g = s+h+d+p;
    printf("%.2f
%.2f",p,g);
}