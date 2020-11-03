#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 *
 * @head: the list where delete the node.
 * @index: the index
 *
 * Return: 1 if success or -1 if fail.
 */

int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i;
	listint_t	*del_node;
	listint_t	*tmp_node;

	if (*head != NULL)
	{
		if (index == 0)
		{
			del_node = *head;
			*head = (*head)->next;
			if (del_node != NULL)
			{
				free(del_node);
			}
			return (1);
		}
		tmp_node = *head;
		i = 1;
		while (tmp_node != NULL && i <= index)
		{
			if (i == index)
			{
				del_node = tmp_node->next;
				if (del_node == NULL)
					tmp_node->next = NULL;
				else
				{
					tmp_node->next = del_node->next;
				}
				if (del_node != NULL)
				{
					free(del_node);
				}
				return (1);
			}
			tmp_node = tmp_node->next;
			i++;
		}
	}
	return (-1);
}
