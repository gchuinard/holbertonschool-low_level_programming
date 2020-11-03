#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: the adress of the list to free.
 *
 * Return: void
 */

void	free_listint2(listint_t **head)
{
	listint_t	*next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
