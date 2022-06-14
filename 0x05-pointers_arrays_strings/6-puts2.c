#include "main.h"
/**
 * _puts - updates the value it points to to 98
 * @str: character value.
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != 0; i += 2)
_putchar(str[i]);
_putchar('\n');
}
