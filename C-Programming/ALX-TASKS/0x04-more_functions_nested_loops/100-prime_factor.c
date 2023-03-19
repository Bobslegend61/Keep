#include <stdio.h>

/**
* main - Print highest prime factor
*/
int main (void)
{
	int i;
        long int n;
	
	n = 612852475143;
	for (i = n/2; i > 1; i--)
	{	
		int j;
		char is_prime = 1;

		j = n % i;
		if (j == 0)
		{
			int k;
			
			for (k = i/2; k > 1; k--)
			{
				int l;

				l = i % k;
				if (l == 0)
				{
					is_prime = 0;
					break;
				} 
			}
			
			if (is_prime == 1)
			{	
				printf("%d\n", i);
				break;
			}
		}	
	}
	return 0;
}
