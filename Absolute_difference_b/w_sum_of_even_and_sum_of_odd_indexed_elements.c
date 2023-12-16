#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        if(i%2==1)
        {
            s=s+arr[i];
        }
    }
    int x=abs(sum-s);
    printf("%d",x);
}