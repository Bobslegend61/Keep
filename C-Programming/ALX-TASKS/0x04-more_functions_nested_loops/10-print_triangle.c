#include "main.h"

/**
* print_triangle - Print triangle
*/
void print_triangle (int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	j = size;
	for (i = 1; i <= size; i++)
	{
		int k;

		for (k = 1; k <= size; k++)
		{
			if (k < j)
			{
				_putchar(' ');
				continue;
			}
			_putchar('#');		
		}
		j--;
		_putchar('\n');			
	}
}
