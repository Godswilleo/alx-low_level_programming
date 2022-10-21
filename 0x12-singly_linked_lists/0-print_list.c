#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the linked list.
 *
 * Return: number of elements in the linked list.
 */

size_t print_list(const list_t *h)
{

	size_t number_of_nodes = 0;

	while (h)
	{
		if ((h->str) == NULL)
		{
        	printf("[0] (nil)\n");
        }
		else
		{
        	printf("[%d]", h->len);
            printf("%s\n", h->str);
        }
        
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);

}
