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
    int even_sum_pos=0;
    for(i=0;i<n;i+=2)
    {
    even_sum_pos+=arr[i];
    }
    {
        printf("%d",even_sum_pos);
    }
}