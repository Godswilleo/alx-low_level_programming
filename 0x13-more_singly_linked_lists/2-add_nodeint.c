#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
**/

listint_t *add_nodeint(listint_t **head, const char *str)
{
	listint_t *new_node;

	int length = strlen(str);

	new_node = malloc(sizeof(listnt_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = length;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
