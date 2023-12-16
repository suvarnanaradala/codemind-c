#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        if(arr[i]%2==1)
        {
            s+=arr[i];
        }
    }
    int x=abs(sum-s);
    printf("%d",x);
}