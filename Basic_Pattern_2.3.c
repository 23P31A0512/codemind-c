#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=65;i<=64+a;i++)
    {
        for(j=65;j<=64+a;j++)
        {
           if(i>=j)
            {
             printf("%c ",j);
            }
        }
            printf("
");
    }
}