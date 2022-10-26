#include "lists.h"

/**
 * free_listint - frees a memory containing linked list
 * @head: head of the linklist.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *i;


	while (head != NULL)
	{
		i = head;
		head = head->next;

		free(i);
	}

}
