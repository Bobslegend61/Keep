#include "main.h"

/**
* print_line - Draws a straight line
*/
void print_line (int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	
}
