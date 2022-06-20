#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == ' ')
				break;
			if (accept[i] == s[j])
			{
				sum += 1;
			}
		}
	}
	return (sum);
}
