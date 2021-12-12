#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int m;
	scanf("%d",&m);

	printf("%d\n%d", n / m, n % m);
}