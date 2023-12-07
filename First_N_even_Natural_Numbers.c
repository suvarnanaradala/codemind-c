#include<stdio.h>
int main()
{
    int n,e,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        e=i*2;
        n=n-1;
        printf("%d ",e);
    }
}