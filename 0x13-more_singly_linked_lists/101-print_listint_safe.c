#include "lists.h"

/**
 * print_listint_safe - The functiion prints a listint_t linked list
 * @head : The head
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *node, *fast;

	if (head == NULL)
		return (0);
	i = 0;
	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		fast = node->next;
		if (fast >= node)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
		node = fast;
	}
	return (i);
}
