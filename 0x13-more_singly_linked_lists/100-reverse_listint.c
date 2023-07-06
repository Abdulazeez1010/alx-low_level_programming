#include "lists.h"

/**
 * reverse_listint - The function  reverses a listint_t linked list
 * @head : The head
 * Return: Returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_link = NULL;

	while (*head != NULL)
	{
		next_link = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head  = next_link;
	}
	*head = prev;
	return (prev);
}

