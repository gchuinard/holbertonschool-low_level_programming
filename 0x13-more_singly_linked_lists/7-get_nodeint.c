#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the list to find the node.
 * @index: the number of the node.
 *
 * Return: the node or NULL.
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;

	}
	return (NULL);
}
