#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct fmtr - Structure to handle _printf formatter
 * @c: pointer to the character format
 * @f: function to print out the formatted value
 */
typedef struct fmtr
{
	char *c;
	int (*f)(va_list ap);
} fmtr_t;

/* FUNCTION DECLARATIONS */
int _putchar(int c);
int fmtr_s(va_list ap);
int fmtr_c(va_list ap);
int fmtr_pct(va_list ap);
int fmtr_int(va_list ap);
int fmtr_bnry(va_list ap);
int (*get_fmtr_func(char c))(va_list ap);
int _printf(const char *format, ...);

/* UTILITY FUNCTION DECLARATIONS */
void rev_str(char *str, int len);
int is_ngtv(int num);

#endif /* _MAIN_H */
