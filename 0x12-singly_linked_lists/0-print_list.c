#include "lists.h"

/**
 * print_list - The function prints all the elements of a list_t list
 * @h : The list
 * Return: Returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
