#include "main.h"
/**
 * _memset - replaces the first n characters
 * @s: string to be changed
 * @b: characters to enter
 * @n: number of characters to be changed
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
