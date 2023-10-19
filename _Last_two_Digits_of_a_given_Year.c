#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    int yr=year%100;
    printf("%.02d",yr);
}