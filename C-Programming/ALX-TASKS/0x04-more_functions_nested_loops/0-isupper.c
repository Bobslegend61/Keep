#include "main.h"

/**
* _isupper - Checks if @c is uppercase
* @n: Charactere to check
*
* Return: 1 if uppercase else 0
*/
int _isupper (int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	} 

	return 0;
}
