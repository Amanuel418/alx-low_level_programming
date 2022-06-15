#include "main.h"
/**
 * _strcat() - concatenates two strings.
 * @*dest: pointer.
 * @*src: pointer.
 * Return - string pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;
	int j;
	char *aman;

	for (i = 0; dest[i] != 0; i++)
	;
	for (j = 0; src[j] != 0; j++)
	{
        	dest[i]=src[j];
	      	i++;
	}
	aman = dest[i];
	return (aman);
}
