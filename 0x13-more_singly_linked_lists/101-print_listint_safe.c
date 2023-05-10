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
	{
		printf("(nil)\n");
		return (0);
	}

	i = 0;
	node = head;
	fast = head;
	while (node != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		node = node->next;
		fast = fast->next->next;
		if (node == fast)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			i++;
			break;
		}
	}

	if (node != NULL)
	{
		while (head != node)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
	}
	return (i);
}
