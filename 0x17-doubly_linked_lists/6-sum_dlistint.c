#include "lists.h"

/**
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
