#include<stdio.h>
int main()
{
    int n,i,n3;
    scanf("%d",&n);
    int n1=0;
    int n2=1;
    printf("%d %d ",n1,n2);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}