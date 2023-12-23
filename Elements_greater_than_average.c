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
    int sum=0,avg;
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    avg=sum/n;
    int c=0;
    for(i=0;i<n;i++)
    {
    if(arr[i]>=avg)
      {
        c=c+1;
      } 
    }
    printf("%d",c);
}