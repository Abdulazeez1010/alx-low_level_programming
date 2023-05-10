#include "lists.h"

/**
 * print_listint_safe - The functiion prints a listint_t linked list
 * @head : The head
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *slow, *fast = head;

	if (head == NULL)
	{
		exit(98);
	}
	i = 0;
	slow = head;
	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			i++;
			break;
		}	
	}
	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			i++;
			slow = slow->next;
		}
	}
	return (i);
}
