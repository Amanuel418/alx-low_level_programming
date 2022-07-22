#include "main.h"
/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, j = 0;

if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
j = j * 2 + 1;
else
j = j * 2 + 0;
}
return (j);
}
