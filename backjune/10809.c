#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	scanf("%s", &s);
	char alphabet[27] = { 0 };

	for (int i = 0; i < strlen(s); i++)
	{
		if (alphabet[s[i] - 97] == 0)
		{
			alphabet[s[i] - 97] = i + 1;
		}
	}

	for (int i = 0; i < 26; i++)
	{

		printf("%d ", alphabet[i] - 1);

	}
}



