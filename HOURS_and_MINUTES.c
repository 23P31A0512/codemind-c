#include<stdio.h>
int main()
{
    int H;
    scanf("%d",&H);
    int g=H/60;
    int k=H%60;
    printf("%d Hour(s) %d Minute(s)",g,k);
}