#include "main.h"

/**
* print_sign - Prints the sign of a number
* @i: Number to check sign
*
* Return: 1 if positive, 0 if zero and -1 if negative
*/
int print_sign (int i)
{
	if (i > 0)
	{
		_putchar('+');
		return 1;
	}

	if (i < 0)
	{
		_putchar('-');
		return -1;
	}

	_putchar('0');
	return 0;
}
