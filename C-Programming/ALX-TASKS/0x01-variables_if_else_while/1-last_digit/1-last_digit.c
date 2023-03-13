#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int ln;

	ln = n % 10;
	printf("Last digit of %d is %d and is ", n, ln);
	if (ln > 5)
	{
		printf("greater than 5\n");
	}
	else if (ln == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("less that 6 and not 0\n");
	}
	return (0);
}
