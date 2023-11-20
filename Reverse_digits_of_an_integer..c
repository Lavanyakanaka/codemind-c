#include<stdio.h>
int main()
{
    int i,n,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        rev = rev*10+i;
        n = n/10;
    }
    printf("%d",rev);
}