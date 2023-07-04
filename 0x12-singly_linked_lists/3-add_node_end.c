#include "lists.h"

/**
 * add_node_end - The function adds a new node at the end of a list_t list
 * @head : The head
 * @str : The string
 * Return: Returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = new_node;

	return (new_node);
}
