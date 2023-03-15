#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from @n to 98
* @n: Start
*/
void print_to_98 (int n)
{
	if (n == 98)
	{
		printf("%d", 98);
	}
	else
	{
		int i;

		i = n;
		while((n < 98 && i <= 98) || (n > 98 && i >= 98))
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			n < 98 ? i++ : i--;	
		}
	}
	printf("\n");
}
