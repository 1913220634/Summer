#include <stdio.h>
#include <stdbool.h>
#define n 100
int main()
{
	bool a[n + 1];
	int i, j;
	for (i = 2; i < n + 1; i++)
	{
		a[i] = true;
	}
	for (i = 2; i < n + 1; i++)
	{
		for (j = 2; j * i < n+1; j++)
		{
			a[i * j] = false;
		}
	}
	for (i = 2; i < n + 1; i++)
	{
		if (a[i] == true)
			printf("%d\n", i);
	}
	return 0;
}