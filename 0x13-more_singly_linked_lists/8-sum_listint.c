#include "lists.h"

/**
 * sum_listint - The function returns the sum of all the data (n)
 * of a listint_t linked list
 * @head : The head
 * Return: Returns the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
