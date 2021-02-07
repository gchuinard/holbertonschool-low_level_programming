#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: the list.
 * @index: the index where we want add the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*node;
	dlistint_t	*prev_node;

	if (head == NULL || *head == NULL)
		return (-1);
	prev_node = *head;
	if (prev_node != NULL)
		node = prev_node->next;
	if ((*head) != NULL && index == 0)
	{
		free((*head));
		(*head) = NULL;
		if (node != NULL)
		{
			node->prev = NULL;
			(*head) = node;
		}
		return (1);
	}
	while (prev_node != NULL && index > 0)
	{
		if (index == 1)
		{
			node = node->next;
			free(prev_node->next);
			prev_node->next = NULL;
			if (node != NULL)
				node->prev = prev_node;
			prev_node->next = node;
			return (1);
		}
		prev_node = node;
		if (node != NULL)
		{
			node = node->next;
		}
		index--;
	}
	return (-1);
}
