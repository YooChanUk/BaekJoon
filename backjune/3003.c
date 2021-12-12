#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int normal[6] = {1,1,2,2,2,8};
	int *find = malloc(sizeof(int) * 6);
	//int* last = malloc(sizeof(int) * 6);
	int chai = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &find[i]);
		chai = normal[i] - find[i];
		printf("%d ",chai);
	}

}