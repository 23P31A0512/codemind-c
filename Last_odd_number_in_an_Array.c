#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    int j=n-1,t;
    while(i<=j)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==1)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}