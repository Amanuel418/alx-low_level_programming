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

	for (i = 0; i <= n; i++)
	{
		if (src[i] == '\0' || src[i] == "")
			{
				dest[i] = '\0';
			}
		dest[i] = src[i];
	}
	return (dest);
}
