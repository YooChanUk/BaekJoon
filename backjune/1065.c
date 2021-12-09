#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int d(int n,int hap)// 135
{
	int a,b,c;
	int ress;

	for (int i = 100; i <=n; i++)
	{
		ress = i; // 135
		a = ress % 10; // 5
		ress = ress / 10; // 13
		b = ress % 10; // 3
		ress = ress / 10; // 1
		c = ress % 10; // 1
		ress = ress / 10;

		if ((c - b) == (b - a))
		{
			hap++;
		}

		
	}
	if (n == 1000)
	{
		hap--;
	}

	return hap;

}

int main()
{
	int n = 0,hap;
	scanf("%d",&n);

	if (n < 100)
	{
		hap = n;
	}
	else if (n >= 100)
	{
		hap = 99;
	}

	d(n,hap);
	printf("%d",d(n,hap));
}

