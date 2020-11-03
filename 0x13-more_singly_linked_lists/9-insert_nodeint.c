#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the list to add the node.
 * @n: the int.
 * @idx: the index
 *
 * Return: the list with a new node or NULL.
 */

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int	i;
	listint_t	*new_node;
	listint_t	*tmp_node;

	if (head != NULL && *head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node != NULL)
		{
			tmp_node = *head;
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				i = 0;
				while (i != idx - 1 && tmp_node != NULL)
				{
					tmp_node = tmp_node->next;
					i++;
				}
				new_node->next = tmp_node->next;
				tmp_node->next = new_node;
				return (new_node);
			}
		}
	}
	return (NULL);
}
