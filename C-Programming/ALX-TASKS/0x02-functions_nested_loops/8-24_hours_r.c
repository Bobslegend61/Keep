#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*/
void jack_bauer (void)
{
	int i, j, k, l;

	i = j = k = l = 0;
	while (l <= 9)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');
		
		if (i == 2 && j == 3 && k == 5 && l == 9)
		{
			l++;
		}
		else
		{

			if (l == 9 && k < 5)
			{
				k++;
				l = -1;
			}
		
			if (k == 5 && l == 9 && j < 9)
			{
				j++;
				k = 0;
				l = -1;
			}

			if (j == 9 && k == 5 && l == 9 && i < 2)
			{
				i++;
				j = 0;
				k = 0;
				l = -1;
			}

			if (l < 9)
			{
				l++;
			}
		}
	}
}
