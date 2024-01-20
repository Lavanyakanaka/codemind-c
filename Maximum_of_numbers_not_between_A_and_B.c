#include<stdio.h>
int main()
{
    int i,n,a,b,p,q;
    //input
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    //Find the maximum elementnot in between a and b
    p=-1;//initialize p to an invalid index
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            p=i;
        }
    }
    //if no element is outside a and b,print -1 and existing between a and b
    if(p==-1)
    {
        printf("-1");
        return 0;
    }
    //Finnd the maximum element in the array
    q=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>q)
        {
            q=arr[i];
        }
    }
    //output
    printf("%d",q);
    return 0;
}