#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main (void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		int j;

		for (j='0'; j <= '9'; j++)
		{
			int k;

			for (k = '0'; k <= '9'; k++)
			{
				int l;

				for (l = '0'; l <= '9'; l++)
				{
					if ((l > j) && (k>=i))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if(i != '9' || j != '8') {
							putchar(',');
							putchar(' ');
						}
					}
				
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
