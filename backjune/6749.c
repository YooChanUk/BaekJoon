#include<stdio.h>

int main()
{
	int a,b;
	int dif = 0;

	scanf("%d %d", &a,&b);


	dif = b - a;
	dif = dif + b;

	printf("%d", dif);
}
