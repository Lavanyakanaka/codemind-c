#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg;
    avg=(sum)/(n);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}