#include<stdio.h>
#include<math.h>
int main()
{
int n,m,i;
scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
{
    int res=pow(i,2);
    int s=pow(i,3);
    printf("%d %d %d
",i,res,s);
}
}