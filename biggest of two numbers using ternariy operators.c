#include <stdio.h>
int main()
{
	int a,b,c,Max;
	printf("enter a&b&c values");
	scanf("%d%d%d", &a, &b, &c);
	Max = a>b ? (a>c) ? a : c : (b>c) ? b : c;
	printf("Maximum of three numbers=%d",Max);
	return 0;
}
