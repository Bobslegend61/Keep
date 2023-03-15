#include "main.h"

/**
* print_last_digit - Prints last digit of a number
* @i: Number from which to print last digit
*
* Return: The last digit of @i
*/
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		i = i / -1;
	}
	last_digit = (i % 10);
	_putchar(last_digit + '0');
	return last_digit;;
}
