#include<stdio.h>
int main()
{
    int i,a,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i<=j)
            {
                printf("* ",i);
            }
        }
        printf("
");
    }
}