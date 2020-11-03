#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: the list to delete the head node.
 *
 * Return: value of n.
 */

int	pop_listint(listint_t **head)
{
	int		nbr;
	listint_t	*node;

	nbr = 0;
	if (*head != NULL)
	{
		nbr = (*head)->n;
		node = *head;
		*head = (*head)->next;
		free(node);

	}
	return (nbr);
}
