#include "lists.h"

/**
 * listint_len - The function returns the number of elements
 * in a linked listint_t list
 * @h : Head
 * Return: Returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

