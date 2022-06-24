#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argv[3] != "\0")
		return (1);
	printf("%d\n", argv[1] * argv[2]);
}
