#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i=0,len=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            len=len+1;
        }
    }
    printf("%d",len);
}