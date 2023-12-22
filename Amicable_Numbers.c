#include<stdio.h>
int main()
{
    int n,i,m,sum=0,s=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            s=s+i;
        }
    }
    if(sum==m && s==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}