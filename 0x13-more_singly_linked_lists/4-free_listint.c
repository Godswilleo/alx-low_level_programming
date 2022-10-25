#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - frees memory
 * @head: head of the list
 * Return: nothing
 */

void free_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	j = *head;

	while ((i = j) != NULL)
	{
		j = j->next;

		free(i);

	}
	*head = NULL
}
