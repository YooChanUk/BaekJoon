#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int arr[10000];

int d(int n)
{
	int hap = n;

	while (n>0)
	{
		
		if (n > 0)
		{
			hap += n % 10;
			n = n / 10;
		}
	}

	return hap;
}

int main()
{
	for (int i = 0; i < 10000; i++)
	{
		arr[d(i)] = 1;
	}

	for (int j = 0; j < 10000; j++)
	{
		if (arr[j] != 1)
		{
			printf("%d\n", j);
		}
	}
}

