#include<stdio.h>
int main()
{
    int l,n,m,k,a,b,c;
    scanf("%d%d%d%d%d%d%d",&l,&n,&m,&k,&a,&b,&c);
    if((m-k)>=n)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    if((b-c)>=a)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
}