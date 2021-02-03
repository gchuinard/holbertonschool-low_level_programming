#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*tmp;
	dlistint_t	*node;

	node = NULL;
	if (*h != NULL)
	{
		tmp = *h;
		if (idx == 0)
		{
			node = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->prev = NULL;
			node->next = *h;
			tmp->prev = node;
			*h = node;
			return (*h);
		}
			while (tmp != NULL)
			{
				if (idx == 1)
				{
					node = malloc(sizeof(dlistint_t));
					if (node == NULL)
						return (NULL);
					node->n = n;
					node->prev = tmp;
					node->next = tmp->next;
					tmp->next = node;
					break;
				}
				tmp = tmp->next;
				idx--;
		}
	}
	return (node);
}
