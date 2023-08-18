#include "lists.h"

/**
 * get_dnodeint_at_index - The function  returns the nth node
 * of a dlistint_t linked list
 * @head : The head pointer
 * @index : The index of the node
 * Return: Returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tp;

	tp = head;
	while (index && tp->next != NULL)
	{
		tp = tp->next;
		index--;
	}
	if (tp == NULL)
		return (NULL);
	return (tp);
}
