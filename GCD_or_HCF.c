#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    while(n2!=0)
    {
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    printf("%d",n1);
}