#include "lists.h"

/**
 * add_dnodeint_end - returns the nth node of a dlistint_t linked list.
 * @head: the list wherefing the node.
 * @index: the index of the node to find.
 *
 * Return: the address of the node, or NULL if it failed.
 */

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t	*tmp;

	if (head != NULL)
	{
		tmp = head;
		while (index != 0)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				return (NULL);
			}
			index--;
		}
		return (tmp);
	}
	return (NULL);
}
