#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,ds=0,r,x;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        n=n/10;
        ds=ds+1;
        
    }
    n=temp;
    for(i=ds;i>=1;i--)
    {
        r=n%10;
        x=pow(r,i);
        sum=sum+x;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}