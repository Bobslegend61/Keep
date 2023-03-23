#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers
* @*a - The array
* @n - The number of elements to be printed
*/
void print_array (int* a, int n)
{
	int i = 0;
	
	while (i <= (n - 1))
	{
		if (i == (n - 1))
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
