#include<stdio.h>
int main()
{
    int n,r,dc=0,c=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        dc=dc+r;
        c=c*r;
        n=n/10;
    }
    if(dc==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}