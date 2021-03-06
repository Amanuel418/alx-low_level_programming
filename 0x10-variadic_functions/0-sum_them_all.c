#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ag;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(ag, n);
for (i = 0; i < n; i++)
sum += va_arg(ag, int);

va_end(ag);
return (sum);
}
