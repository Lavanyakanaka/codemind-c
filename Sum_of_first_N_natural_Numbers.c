#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       i=(n*(n+1))/2.0;
       printf("%d",i);
    }
}