#include <stdio.h>
int main()
{
  int a,b;
  printf("enter a&b value");
  scanf("%d%d",&a,&b);
  printf("Before swap a=%d,b=%d",a,b);
       a= a+b;
       b= a-b;
       a= a-b;
  printf("\n After swap a=%d,b=%d,a,b");
  return 0;
}
  
