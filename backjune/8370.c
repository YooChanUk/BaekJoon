#include<stdio.h>

int main()
{
	int a, b;
	int c, d;
	int res1, res2;
	int sum = 0;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);

	res1 = a * b;
	res2 = c * d;
	sum = res1 + res2;

	printf("%d", sum);
}