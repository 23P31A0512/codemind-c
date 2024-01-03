#include<stdio.h>
int main()
{
    int i,a,b,lcm,n;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        lcm=i*a;
        n=lcm%b;
        if(n==0)
        {
            printf("%d",lcm);
            break;
        }
    }
}