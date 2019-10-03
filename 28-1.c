#include <stdio.h>

int main() 
{
  int a,b;
  printf("Input a = ");
  scanf("%d",&a);
  printf("Input b = ");
  scanf("%d",&b);
  if(a>b)
  {
    printf("Hi");
    printf(" Thanks");
  }
  else
  {
    printf("Hey");

    if(a==b)
    {
      printf(" Yo!!");
      printf(" Thanks");
    }
    else
    {
      printf(" Thanks");
    }
  }
  return 0;
}