#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 0;//�׽�Ʈ���̽� ����
	int re = 0;//�ݺ� Ƚ��
	char s[20];//s�� ���� 1< s <20
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &re);
		scanf("%s",s);
		for (int j = 0; j < strlen(s); j++)
		{
			for (int k = 0; k < re; k++)
			{
				printf("%c", s[j]);
			}
			
			
		}
		printf("\n");
	}
}



