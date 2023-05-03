#include "lists.h"

/**
 * insert_nodeint_at_index - The function inserts a new node
 * at a given position
 * @head : The head
 * @idx : The index of the list where the new node should be added
 * @n : The node to be added
 * Return: Returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	unsigned int i;

	if (ptr == NULL)
		return (NULL)i;

	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}

	for (i = 0; ptr != NULL && i < idx - 1; i++)
		ptr = ptr->next;
	if (i != idx - 1)
	{
		free(ptr2);
		return (NULL);
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
