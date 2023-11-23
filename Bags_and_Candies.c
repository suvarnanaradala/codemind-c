#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int x=n/(k*m);
    if(n%(k*m)==0)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",x+1);
    }
}