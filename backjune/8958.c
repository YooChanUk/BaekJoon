#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 0;
    int b = 1;
    scanf("%d", &a);

    char ox[80];

    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        sum = 0;
        b = 1;
        scanf("%s", ox);

        for (int j = 0; j < strlen(ox); j++)
        {
            if (ox[j] == 'O')
            {
                sum += b;
                b++;
            }
            else
            {
                b = 1;
            }
        }

        printf("%d\n", sum);
    }



}
