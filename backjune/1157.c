#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[1000001];//s¿« ±Ê¿Ã s < 1000000
	scanf("%s", s);
	int all[26] = { 0 };
	int max = 0;
	int arrmax = 0;

	int str = strlen(s);

	for (int i = 0; i < str; i++)
	{
		if (s[i] < 97)
		{
			s[i] = s[i] - 65;
		}
		else
		{
			s[i] = s[i] - 97;
		}

		all[s[i]] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		if (arrmax < all[i])
		{
			arrmax = all[i];
			max = i + 65;
			
		}
		else if (all[i] == arrmax)
		{
			max = '?';
		}
	}

	printf("%c",max);
}






