#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,x=0,s,i,j,y;
    scanf("%d",&n);
    int t=n;
    for(i=1;i<=n;i++)
    {
        s=pow(i,2);
        sum=sum+s;
    }
    for(j=1;j<=t;j++)
    {
        x=x+j;
    }
    y=pow(x,2);
    printf("%d",abs(y-sum));
}