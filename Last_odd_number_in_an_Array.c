#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            flag=arr[i];
        }
    }
    {
        printf("%d",flag);
    }
}