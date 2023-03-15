#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*/
void jack_bauer (void)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		int j;

		for (j = 0; (i == 2 && j <= 3) || (i < 2 && j <= 9); j++)
		{
			int k;
		
			for (k = 0; k <= 5; k++)
			{
				int l;

				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
