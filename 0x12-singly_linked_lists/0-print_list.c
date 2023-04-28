#include "lists.h"

/**
 * print_list - Prints all element of a list
 * @h : Pointer to struct list
 * Return: Returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	i = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", current->len);
			printf("[%s] ", current->str);
			printf("\n");
		}
		current = current->next;
		i++;
	}
	return (i);
}
