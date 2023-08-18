#include "lists.h"

/**
 * sum_dlistint - The function returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head : The head pointer
 * Return: Returns the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tp;

	tp = head;
	sum = 0;
	while (tp != NULL)
	{
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}
