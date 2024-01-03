#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=21-(a+b);
    if(a+b+x==21 && x<=10)
    {
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
}