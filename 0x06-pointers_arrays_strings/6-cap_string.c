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

	for (i = 0; n[i] != 0; i++)
	{
		if (i == 0 && n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
		else if (n[i - 1] == ' ' && n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
	}
	return (n);
}
