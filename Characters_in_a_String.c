#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int len=strlen(str);
    printf("%d",len);
}