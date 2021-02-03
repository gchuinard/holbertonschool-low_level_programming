#include "lists.h"

/**
 * sum_dlistint - adds a new node at the beginning of a dlistint_t list.
 * @head: the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

int	sum_dlistint(dlistint_t *head)
{
	dlistint_t	*tmp;
	int		sum;

	sum = 0;
	if (head != NULL)
	{
		tmp = head;
		sum += tmp->n;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			sum += tmp->n;
		}
	}
	return (sum);
}
