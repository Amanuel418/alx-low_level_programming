#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: the string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
 */
char *cap_string(char *n)
{
	int i;
	int j;

	j = i - 1;
	for (i = 0; n[i] != 0; i++)
	{
		if (n[0] || n[j] == 32)
		{
			if (n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (n);
}
