#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter row & column sizes");
	scanf("%d%d", &r,&c);
	printf("enter 2D array values");
	for(i=0;i<r;i++)
	{
	 for(j=0;i<c;j++)
	{
	 scanf("%d%d", &a[i][j]);
	 printf("/n display 2D array values");
	 for(i=0;i<r;i++)
	 {
	  for(i=0;i<c;i++)
	 {
	  for(j=0;j<c;j++)
	 {
	  printf("%d", a[i][j]);
	 }
     }
	 }
}
	  printf("/n");
	}
	return 0;
	   }
