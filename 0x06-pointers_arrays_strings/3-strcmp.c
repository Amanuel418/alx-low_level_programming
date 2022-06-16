#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return : -1 , 0 , 1.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0; i++)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s2[i] > s1[i])
		{
			return (-1);
		}
		else if (s1[i] == s2[i])
		{
			continue;
		}
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
}
