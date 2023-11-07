#include<stdio.h>
int main()
{
    int b;
    float d,h;
    scanf("%d",&b);
    if(b<=10000)
    {
        d = (0.8)*b;
        h = (0.2)*b;
        printf("%.2f",b+d+h);
    }
    else if(b<=20000 && b>10000)
    {
        d = (0.9)*b;
        h = (0.25)*b;
        printf("%.2f",b+d+h);
    }
    else
    {
        d = (0.95)*b;
        h = (0.3)*b;
        printf("%.2f",b+d+h);
    }
}