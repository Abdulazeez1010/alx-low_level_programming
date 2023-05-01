#include "lists.h"

/**
 * print_listint - The function prints all the elements of a listint_t list
 * @h : Head
 * Return: Returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *current = h;

	if (h == NULL)
		return (0);
	i = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
