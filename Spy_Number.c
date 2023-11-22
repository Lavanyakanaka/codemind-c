#include<stdio.h>
int main()
{
    int n,i,ds=0,dp=1,t;
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        ds+=t;
        dp*=t;
        n=n/10;
    }
    if(ds==dp)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}