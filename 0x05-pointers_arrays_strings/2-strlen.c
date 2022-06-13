#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string value.
 * Return: i value.
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		*s++;
	}
}
