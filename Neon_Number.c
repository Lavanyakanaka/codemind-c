#include<stdio.h>
int main()
{
    int n,p,i,sum=0,r;
    scanf("%d",&n);
    p=n*n;
    {
        for(i=1;i<=p;i++){
            r=p%10;
            sum+=r;
            n=n/10;
        }
    }
    if(p==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}