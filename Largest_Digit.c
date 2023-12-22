#include<stdio.h>
int main()
{
    int n,digit=0,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        if(digit>large)
       {
        large=digit;
       }
    }
    printf("%d",large);
}