#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            {
                flag=1;
            }
        }
    }
    if (flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}