#include <stdio.h>
/**
* _atoi - Converts string to integer
* @*str: String to convert
*
* Return: The integer of value of the string
*/
int _atoi (char* str)
{
	int sign = '+';
	int digits = 0;
	int result = 0;
	char* p;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digits++;
			p = &str[i];
		}

		if (
			i > 0
			&&
			(str[i - 1] >= '0' && str[i - 1] <= '9') 
			&& 
			(str[i] < '0' || str[i] > '9' )
		   )
			break;

		if (str[i] == '+' || str[i] == '-')
		{
			if ( sign == '+' && str[i] == '-')
			{
				sign = '-';
			}
			
			else if ( sign == '-' && str[i] == '-')
				sign = '+';
		}
		i++;		
	}
	
	digits -= 1;
	while (digits >= 0)
	{
		int i = digits;
		int multiplier = (*(p - digits) - '0');

		while (i > 0)
		{
			multiplier *= 10;
			i--;
		}	
		result = result + multiplier;	
		digits--;
	}
	if (sign == '+')
		return result;

	return (result - (result * 2));
}
