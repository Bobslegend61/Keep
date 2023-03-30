#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("%b\n", 98);
	_printf("%d\n", len);
	len = _printf("%b\n", 8);
	_printf("%d\n", len);
	_printf("[%%]\n");
	len = _printf("Char: %c and Int: %i\n", 'k', 90);
	len2 = printf("Char: %c and Int: %i\n", 'k', 90);
	_printf("%i - %i\n", len, len2);
	printf("%i - %i\n", len, len2);
	return (0);
}
