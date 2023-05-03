#include "lists.h"

/**
 * get_nodeint_at_index - The function returns the nth node
 * of a listint_t linked list
 * @head : The head
 * @index : The index of the node
 * Return: Returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = NULL;


	if (head == NULL)
		return (NULL);
	ptr = head;
	for (i = 0; i < index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
