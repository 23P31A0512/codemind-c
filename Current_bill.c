#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<=199)
    {
        printf("%.2f",( x*1.20)+100);
    }
    else if(x>=200&x<400)
    {
        printf("%.2f",(x*1.50)+100);
    }
    else if(x>=400&x<600)
    {
        printf("%.2f",(x*2.00)+(x*1.80*0.15));
    }
    else if(x>=600)
    {
        printf("%.2f",(x*2.00)+(x*2.00*0.15));
    }
}