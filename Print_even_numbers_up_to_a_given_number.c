#include<stdio.h>
int main()
{
    int i,a,n;
    scanf("%d%d",&n,&a);
    for(i=n;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}