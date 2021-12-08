#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long sum(int* a, int n)
{
    //scanf("%d",&n);
    long long ans = 0;
    //*a = malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }

    return ans;
}
