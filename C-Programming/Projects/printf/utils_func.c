#include "main.h"

/**
 * rev_str - Function to reverse a string
 * @str: String pointer to reverse
 * @len: length of the string to reverse
 *
 * Return: Nothing to return
 */
void rev_str(char *str, int len)
{
	int i = 0;
	int half = len / 2;

	while (i < half)
	{
		int temp = *(str + i);

		*(str + i) = *(str + (len - 1));
		*(str + (len - 1)) = temp;

		len--;
		i++;
	}
}

#include "main.h"

/**
 * is_ngtv - Checks if an int is a negative
 * @num: Number to check
 *
 * Return: 0 if negative and 1 if positive
 */
int is_ngtv(int num)
{
	if (num < 0)
		return (1);
	return (0);
}
