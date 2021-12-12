#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int* n = malloc(sizeof(int) * 2);
	int sum = 0;

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &n[i]);
		sum += n[i];
	}

	printf("%d", sum);

}