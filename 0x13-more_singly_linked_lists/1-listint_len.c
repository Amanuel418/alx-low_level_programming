#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *numNode = h;
	int num = 0;

	while (numNode)
	{
		num++;
		numNode = numNode->next;
	}
	return (num);
}
