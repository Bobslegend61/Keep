#include "main.h"

/**
* puts2 - Print every other character of a string starting with the first
* @*str - string
*/
void puts2 (char* str)
{
	do
	{
		_putchar(*str);
		str+=2;
	}
	while(*str != '\0' || *(str - 1) != '\0');
	_putchar('\n');
}
