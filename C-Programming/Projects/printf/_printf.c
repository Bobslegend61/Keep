#include "main.h"

/**
 * _printf - Prints a formatted string
 * @format: A pointer to the string that will be formatted
 *
 * Return: Character count/length of the format
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;
	int (*f)(va_list ap);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			f = get_fmtr_func(*format);
			if (f != NULL)
			{
				c += f(args);
				format++;
				continue;
			}
			format--;
		}
		c += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (c);
}
