#include<stdio.h>
int main()
{
    int i=1,n,r,sum,rev=0;
    scanf("%d",&n);
    r=n*n;
    while(r!=0)
    {
       sum=r%10;
       rev=rev+sum;
       r=r/10;
    }
    if(rev==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}