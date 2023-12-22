#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int se,flag;
    scanf("%d",&se);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        if(se==arr[i][j])
        {
         flag=1;
         break;
         }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}