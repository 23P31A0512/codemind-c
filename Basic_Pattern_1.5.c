#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=65;i<=64+a;i++)
    {
        for(j=65;j<=64+a;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}