#include "lists.h"

/**
 * list_len - find the len of a list
 * @h: pointer to a list_t
 *
 * Return: the lenth of the list.
 */
size_t list_len(const list_t *h)
{
	int	size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
