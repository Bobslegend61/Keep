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

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d - %d\n", len, len2);

	_printf("Unknown:[%r]\n");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("Integer:[%i]\n", 452);
	len2 = printf("Integer:[%i]\n", 452);
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("Integer:[%i]\n", 5);
	len2 = printf("Integer:[%i]\n", 5);
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("Integer:[%i]\n", 45245503/2);
	len2 = printf("Integer:[%i]\n", 45245503/2);
	printf("Len:[%d]\n", len); 
	printf("Len:[%d]\n", len2);
}
