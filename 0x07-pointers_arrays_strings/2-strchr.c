#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to first occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
