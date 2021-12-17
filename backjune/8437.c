#include<stdio.h>

int main()
{
	//¹ÌÇØ°á
	int a, b;

	scanf("%d %d", &a,&b);

	int c = (a - b) / 2;

	printf("%d\n", c + b);
	printf("%d",c);
}