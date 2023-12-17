#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&p);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            count++;
        }
    }
    printf("%d",count);
}