#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    printf("%d",x);
}