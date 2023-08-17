#include "lists.h"

/**
 * dlistint_len - The function return the number of elements
 * in a linked dlistint_t list
 * @h : The head pointer
 * Return: Returns number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
