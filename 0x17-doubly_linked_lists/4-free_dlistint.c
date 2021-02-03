#include "lists.h"

/**
 * free_dlistint - adds a new node at the beginning of a dlistint_t list.
 * @head: the list to free.
 *
 */

void	free_dlistint(dlistint_t *head)
{
	dlistint_t	*tmp;
	dlistint_t	*node;

	if (head != NULL)
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			node = tmp;
			tmp = tmp->next;
			if (node->next != NULL)
			{
				free(node->next);
			}
		}
		free(head);
	}
}
