#include "main.h"

/**
* print_diagonal - Draws a diagonal line
*/
void print_diagonal (int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	
	for (i = 1; i <= n; i++)
	{
		int j;
		
		j = 1;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		
	}
}
