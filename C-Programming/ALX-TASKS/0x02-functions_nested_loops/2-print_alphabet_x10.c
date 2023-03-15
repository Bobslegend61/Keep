#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet,
*		       in lowercase, followed by a new ling
*/
void print_alphabet_x10 (void)
{
	int i;
	for (i = 1; i <=10; i++)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
