#include<stdio.h>
int main()
{
    int n,r,rev=0,a;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(a==rev)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
}