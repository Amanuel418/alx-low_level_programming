#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @c: character
 * @size: size of character in bytes
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (0);
	ptr = malloc(size);
	ptr[0] = c;
	return (ptr);
}
