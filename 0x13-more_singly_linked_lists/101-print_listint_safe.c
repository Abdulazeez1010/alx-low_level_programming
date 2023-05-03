#include "lists.h"

/**
 * print_listint_safe - The functiion prints a listint_t linked list
 * @head : The head
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		i++;
		if (i >100)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			exit(98);
		}
	}
	return (i);
}
