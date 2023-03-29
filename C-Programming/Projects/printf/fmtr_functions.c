#include "main.h"

/**
 * fmtr_s - Function to print format as string
 * @ap: Current argument from list or args
 *
 * Return: length of the characters
 */
int fmtr_s(va_list ap)
{
	int c;
	char *p = va_arg(ap, char *);

	for (c = 0; p[c] != '\0'; c++)
		;
	return (write(1, p, c));
}

/**
 * fmtr_c - Function to print format as a character
 * @ap: Current argument from list or args
 *
 * Return: Length of character
 */
int fmtr_c(va_list ap)
{
	int p = va_arg(ap, int);

	return (write(1, &p, 1));
}

/**
 * fmtr_pct - Function to print percentage
 * @ap: Current argument
 *
 * Return: 1
 */
int fmtr_pct(va_list ap)
{
	int p = 37;

	return (write(1, &p, 1));
}

/**
 * fmtr_int - Prints format as an integer
 * @ap: Current argument from va_list
 *
 * Return: Length of decimal number
 */
int fmtr_int(va_list ap)
{
	int v = va_arg(ap, int);
	int i = 0;
	char *p = (char *)malloc(1);
	int res;

	while (v >= 10)
	{
		*(p + i) = (v % 10) + '0';
		v /= 10;
		i++;
	}
	*(p + i) = v + '0';
	i += 1;
	rev_str(p, i);
	res = write(1, p, i);
	free(p);
	return res;
}

/**
 * fmtr_d - Prints format as a decimal
 * @ap: Current argument from va_list
 *
 * Return: Length of decimal
 */
//int fmtr_d(va_list ap)
//{
	
//}
