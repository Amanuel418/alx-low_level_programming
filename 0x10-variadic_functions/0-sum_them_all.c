#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all numbers in argument
 * @n: integer
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;

	va_start(ag, n);
	
	if (n == 0)
		return (0);

	int i;
	int sum = 0;

	for (i = 0; i < args; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);

	return (sum);
}
