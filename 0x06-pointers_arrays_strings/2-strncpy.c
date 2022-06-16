#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input parameter string
 * @src: input parameter string
 * @n: integer.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; src[i] < n; i++)
	;
	for (j = 0; src[i] > 0; i--)
	{
		dest[0] = src[i];
	}
	return (dest);
}


