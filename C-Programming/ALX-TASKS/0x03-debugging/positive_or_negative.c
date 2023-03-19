#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	printf("%d is ", i);
	if (i > 0)
	{
		printf("positive\n");
	}
	else if (i < 0)
	{
		printf("negative\n");
	}
	else
	{
		printf("zero\n");
	}
}
