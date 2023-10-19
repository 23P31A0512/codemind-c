#include<stdio.h>
int main()
{
    int h=0,m=0,s=0;
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}