#include "main.h"
/**
 * _memcpy - copies a part of the string to another
 * @src: source string
 * @dest: destination string
 * @n: number of characters to be copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
