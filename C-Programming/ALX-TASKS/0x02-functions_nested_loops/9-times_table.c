#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0
*/
void times_table (void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;
		
		while (j <= 9)
		{
			int result = i * j;
			int first_digit = result / 10;
			int last_digit = result % 10;

			if (first_digit > 0)
			{
				_putchar(first_digit + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			_putchar(last_digit + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
