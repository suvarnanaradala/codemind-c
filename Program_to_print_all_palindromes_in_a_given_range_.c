#include<stdio.h>
int main()
{
    int a,b,i,rev,r,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        rev=0;
        t=i;
        while(i>0)
        {
            r=i%10;
            rev=rev*10+r;
            i=i/10;
        }
        i=t;
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}