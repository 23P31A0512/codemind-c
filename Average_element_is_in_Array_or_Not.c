#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    res=sum/n;
    for(i=0;i<n;i++)
    {
        if(res==arr[i])
        {
            printf("True");
            break;
        }
    }
    if(res!=arr[i])
    {
        printf("False");
    }
}