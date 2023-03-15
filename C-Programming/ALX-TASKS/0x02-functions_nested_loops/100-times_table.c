#include "main.h"

/**
* print_times_table - Prints times table
* @n: Number of times table to print
*/
void print_times_table (int n)
{
	int i;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			int result, fd, rmf, rms;

			result = i * j;
			fd= result / 10;
			rms = result % 10;
			rmf = 0;
			if ((fd / 10) > 0)
			{
				rmf = fd % 10;
				fd = fd / 10;
			}

			if(j > 0 && fd == 0)
			{
				_putchar(' ');
			}
			if (j > 0 && fd == 0 && rmf == 0)
			{
				_putchar(' ');
			}
			if (j > 0 && result <= 99 && fd > 0 && rmf == 0)
			{
				_putchar(' ');
			}
			
			if (fd != 0)
			{
				_putchar(fd + '0');
			}
			if ((fd > 0 && rmf == 0 && result > 99) || rmf != 0)
			{
				_putchar(rmf + '0');
			}
			
			_putchar(rms + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		
		}
		_putchar('\n');
	}
}
