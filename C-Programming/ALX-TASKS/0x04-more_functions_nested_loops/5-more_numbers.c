#include "main.h"

/**
* more_numbers - Prints 10 times, the numbers from 0 to 14, followed by a new li* ne
*/
void more_numbers (void)
{
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		int j;
		
		for (j = 0; j <= 14; j++)
		{
			int f;

			f = j < 10 ? j : j / 10;
			_putchar(f + '0');
			if (j > 9)
			{
				int l;

				l = j % 10;
				_putchar(l + '0');
			}
		}
		_putchar('\n');
	}	
}
