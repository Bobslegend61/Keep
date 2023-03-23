#include "main.h"

/**
* puts_half - Prints half of a string
* @*str - The full string
*/
void puts_half (char* str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	i = (len - i) / 2;
	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}	
	_putchar('\n');
}
