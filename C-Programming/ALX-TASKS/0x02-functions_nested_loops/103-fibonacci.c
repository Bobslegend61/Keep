#include <stdio.h>

/**
* main - Even fibonacci sequence
*
* Return: 0
*/
int main (void)
{
	unsigned int i, j, result;

	i = 1;
	j = 2;
	result = 2;
	while (j < 4e6)
	{	
		unsigned int k;

		k = i + j;
		if (k % 2 == 0)
		{
			result+= k;	
		}
		i = j;
		j = k;
	}
	printf("%u\n", result);
}
