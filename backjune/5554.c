#include<stdio.h>

int main()
{
	int a;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &a);
		sum += a;
	}

	printf("%d\n%d", sum / 60, sum % 60);
}
