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

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
