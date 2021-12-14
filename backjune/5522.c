#include<stdio.h>

int main()
{
	int a;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		sum += a;
	}

	printf("%d", sum);
}
	