#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n, m;
	scanf("%d %d",&n,&m);
	int bp = n * m;
	int* p = malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&p[i]);
		p[i] -= bp;

		printf("%d ",p[i]);
	}

}