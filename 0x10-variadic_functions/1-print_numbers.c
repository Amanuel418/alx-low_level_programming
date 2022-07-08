#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - entry point
 * @separator: get character colon
 * @n: arguments quantity
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	va_start(ap,n);

	unsigned int i;

	for (i = 0; i < ap; i++)
	{
		printf("%d", va_arg(ap, int);
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%p", separator);
		}
	}
	_putchar('\n');
	va_end(ap);
}
