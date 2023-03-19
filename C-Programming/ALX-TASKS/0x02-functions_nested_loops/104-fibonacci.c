#include <stdio.h>

/**
* main - Print fibonnaci
*
* Return: 0
*/
int main (void)
{
	unsigned long int i, j, k;

	i = 1;
	j = 2;
	printf("%lu, %lu", i, j);
	for (k = 2; k <= 98; k++)
	{
		unsigned long int r;

		r = i + j;
		printf(", %lu", r);
		i = j;
		j = r;
	}
	return 0;
}
