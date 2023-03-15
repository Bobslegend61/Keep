#include "main.h"

/**
* _islower - Checks if a character is lowercase or not
* @i: The integer to check
*
* Return: 1 if true else 0
*/
int _islower (int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return 1;
	}
	return 0;
}
