#include "lists.h"
#include <stdlib.h>


/**
 * free_listint22 - frees memory
 * @head: head of the list
 * Return: nothing
 */

void free_listint2(listint_t **head);
{
	listint_t *i;
	listint_t *j;


	if (head != NULL)
	{
		j = *head;

		while ((i = j) != NULL)
		{
			j = j->next;
			free(i);
		}
		*head = NULL

	}
}
