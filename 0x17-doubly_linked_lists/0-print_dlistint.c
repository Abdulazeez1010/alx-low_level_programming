#include "lists.h"

/**
 * print_dlistint - The function prints all the elements of a dlistint_t list
 * @h : The head pointer
 * Return: Returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
