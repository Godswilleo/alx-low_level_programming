#include "lists.h"
/**
 * listint_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{

		h = h->next;

	    n++;
	}

	return (n);
}
