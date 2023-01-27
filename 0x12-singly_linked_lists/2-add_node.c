#include "lists.h"

/**
 * add_node - appends a node to the head
 * @head: address to a node list_t
 * @str: a string to add to the lists content
 *
 * Return: pointer to a list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head && str)
	{
		str->next = *head;
		*head = str;
	}
	return (*head);
}
