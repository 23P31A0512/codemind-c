#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(ch=='V' || ch=='v')
  {
      printf("Violet");
  }
  else if(ch=='I' || ch=='i')
  {
      printf("Indigo");
  }
  else if (ch=='B' || ch=='b')
  {
      printf("Blue");
  }
  else if(ch=='G' || ch=='g')
  {
      printf("Green");
  }
  else if(ch=='Y' || ch=='y')
  {
      printf("Yellow");
  }
  else if(ch=='O' || ch=='o')
  {
      printf("Orange");
  }
  else if(ch=='R' || ch=='r')
  {
      printf("Red");
  }
  else
  {
      printf("-1");
  }
}