#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}