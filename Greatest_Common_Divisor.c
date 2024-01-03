#include<stdio.h>
int main()
{
    int i,n,a,b,m,hcf;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=i*a;
        n=m%b;
        if(n==0)
        {
            hcf=(b*a)/m;
            printf("%d",hcf);
            break;
        }
    }
}