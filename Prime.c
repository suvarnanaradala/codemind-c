#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=flag+1;
        }
    }
    if(flag==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}