#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: the list where delete the node.
 *
 * Return: the list or NULL if fail.
 */

listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*prev_node;
	listint_t	*next_node;

	if (*head != NULL)
	{
		prev_node = NULL;
		while (*head != NULL)
		{
			next_node = (*head)->next;
			(*head)->next = prev_node;
			prev_node = *head;
			*head = next_node;
		}
		*head = prev_node;
		return (*head);
	}
	return (NULL);
}
