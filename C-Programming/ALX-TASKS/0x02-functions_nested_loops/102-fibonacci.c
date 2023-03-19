#include <stdio.h>

/**
* main - Entry point Fibonacci
*
* Return: 0
*/
int main (void)
{	
	int c;
	long int i;
	long int j;
		
	i = 0;
	j = 1;
	printf("%ld, %ld", i, j);
	for (c = 3; c <= 50; c++)
	{
		long int k;

		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	printf("\n");
	return 0;
}
