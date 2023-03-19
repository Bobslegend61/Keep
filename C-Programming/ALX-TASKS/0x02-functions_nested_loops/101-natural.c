#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main (void)
{	
	int result, i;

	result = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result+=i;
		}
	}
	printf("%d\n", result);
	return(0);
}
