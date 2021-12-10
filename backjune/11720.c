#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int sum = 0;
	int n = 0;
	scanf("%d", &n);
	char ch[100] = { "0" };

	scanf("%s", &ch);

	for (int i = 0; i < n; i++)
	{
		sum += ch[i] - 48;
	}

	printf("%d", sum);
}



