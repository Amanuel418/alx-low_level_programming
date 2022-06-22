#include "main.h"
/**
 * _puts_recursion - prints a string and a new line
 * @s: string pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
