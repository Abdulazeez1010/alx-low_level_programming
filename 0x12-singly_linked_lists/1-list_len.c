#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - Returns the number of elements of a list
 * @h : Pointer to struct list
 * Return: Returns number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
