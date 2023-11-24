#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    while(n>0)
    {
        n%10;
        if(n%10>x)
        {
            x=n%10;
        }
        n/=10;
    }
    printf("%d",x);
    
}