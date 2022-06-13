#include "main.h"
/**
 * print_rev - prints reversed string.
 * @s: string type.
 */
void print_rev(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != 0; i++)
	;
	x = i;
	for (int j = x; s[j] == s[0]; j--)
	{
		_putchar(s[j]);
		_putchar("\n");
	}
}
