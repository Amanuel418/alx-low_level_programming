#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array of integers
 * @n: the number of integers in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		a[i] = temp;
		a[n] = a[i];
		temp = a[n];
		i++;
		n--;
	}
}
