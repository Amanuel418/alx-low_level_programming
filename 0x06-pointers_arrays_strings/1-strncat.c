#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: integer.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;
	int j;

	for (i = 0; dest[i] != 0; i++)
	;
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
		if (j == n)
		{
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}