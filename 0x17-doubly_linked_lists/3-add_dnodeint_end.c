#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: the list to add a node.
 * @n: the number to add to the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*node;
	dlistint_t	*tmp;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}
	return (node);
}
