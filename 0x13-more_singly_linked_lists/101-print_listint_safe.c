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
	const listint_t *check_ptr = NULL;
	int check = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		i++;
		check_ptr = ptr->next;
		if (check_ptr <= ptr && check == 1)
		{
			printf("-> [%p] %d\n", (void *)check_ptr, check_ptr->n);
			break;
		}
		ptr = check_ptr;
		check = 1;
	}
	return (i);
}
