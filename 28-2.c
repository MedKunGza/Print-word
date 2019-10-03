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
  }
  else
  {
    printf("Hey");

    if(b>6)
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