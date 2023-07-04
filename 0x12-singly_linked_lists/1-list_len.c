#include "lists.h"

/**
 * list_len - The function returns the number of elements
 * in a linked list_t list
 * @h : The list
 * Return: Returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
