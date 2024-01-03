#include<stdio.h>
int main()
{
    int n,m,k,r;
    scanf("%d%d%d",&n,&m,&k);
    r=n-(m*k);
    if(r<=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}