#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	putchar(*s);
}
