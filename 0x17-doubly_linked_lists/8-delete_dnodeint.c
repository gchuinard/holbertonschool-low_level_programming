#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the list.
 * @idx: the index where we want add the node.
 * @n: the value of n.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*node;
	dlistint_t	*prev_node;

	prev_node = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (prev_node != NULL)
	{
		node = prev_node->next;
	}
	if (prev_node != NULL && index == 0)
	{
		if (node != NULL)
		{
			node->prev = NULL;
			*head = node;
		}
		return (1);
	}
	while (prev_node != NULL && index > 0)
	{
		if (index == 1)
		{
			node = node->next;
			free(prev_node->next);
			if (node != NULL)
			{
				node->prev = prev_node;
			}
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
