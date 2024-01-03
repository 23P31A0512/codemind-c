#include<stdio.h>
int main()
{
    int n,r,sum=0,fact=1,k;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        fact=fact*r;
        n=n/10;
        k=fact-sum;
    }
    printf("%d",k);
}