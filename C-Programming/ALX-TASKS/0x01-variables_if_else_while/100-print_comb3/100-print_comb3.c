#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main (void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		char j;

		for(j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return(0);
}
