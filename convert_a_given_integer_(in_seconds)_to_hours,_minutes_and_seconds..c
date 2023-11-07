#include<stdio.h>
int main()
{
    int num,hours,min,sec;
    scanf("%d",&num);
    hours = (num/3600);
    min = (num%3600)/60;
    sec = (num%3600)%60;
    printf("H:M:S-%d:%d:%d",hours,min,sec);
}