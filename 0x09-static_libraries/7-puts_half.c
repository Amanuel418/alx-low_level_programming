#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: character value
 */
void puts_half(char *str)
{
int x, n;

for (x = 0; str[x] != '\0'; x++)
;
if ((x % 2) == 0)
{
for (n = x / 2; n < x; n++)
_putchar(str[n]);
}
else if ((x % 2) != 0)
{
for (n = (x + 1) / 2; n < x; n++)
_putchar(str[n]);
}
_putchar('\n');
}
