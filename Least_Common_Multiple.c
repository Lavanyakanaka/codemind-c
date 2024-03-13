#include<stdio.h>
int main()
{
    int i,a,b,d;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        d=a*i;
        if(d%b==0)
        break;
    }
    if(d%b==0)
    {
        printf("%d",d);
    }
}