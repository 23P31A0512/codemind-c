#include<stdio.h>
int main()
{
    int n,n2,n3,i;
    scanf("%d",&n);
    int n1=0;n2=1;
    for(i=2;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n3==n)
        {
            break;
        }
    }
    if(n3==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}