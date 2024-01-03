#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int coins10=x/10;
    int remain=x%10;
    int coins5=remain/5;
    int t=coins10+coins5;
    if(remain%5!=0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",t);
    }
}