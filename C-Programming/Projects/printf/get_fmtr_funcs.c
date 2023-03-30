#include "main.h"

/**
 * get_fmtr_func - Find the right formatter functions to use
 * @c: Formatter
 *
 * Return: Pointer to the formatter function
 */
int (*get_fmtr_func(char c))(va_list ap)
{
	int i = 0;

	fmtr_t fmtrs[] = {
		{"c", fmtr_c },
		{"s", fmtr_s },
		{"%", fmtr_pct},
		{"i", fmtr_int},
		{"d", fmtr_int},
		{"b", fmtr_bnry},
		{NULL, NULL}
	};

	while ((fmtrs + i)->c != NULL)
	{
		if (*(fmtrs + i)->c == c)
			break;
		i++;
	}
	return ((fmtrs + i)->f);
}
