#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		if (h->n == 0)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("%d\n", h->n);
		}

		number_of_nodes++;

		h = h->next;
	}
	return (number_of_nodes);
}
