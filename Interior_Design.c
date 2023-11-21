#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int f=a+b;
    int e=c+d;
    if(f<e)
    {
        printf("%d",f);
    }
    else
    {
        printf("%d",e);
    }
}