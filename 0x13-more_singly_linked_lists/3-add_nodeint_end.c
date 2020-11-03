#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: the list to add the node.
 * @n: the int.
 *
 * Return: the list with a new node or NULL.
 */
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new_node;
	listint_t	*end_node;

	end_node = *head;
	new_node = (listint_t *)malloc(sizeof(new_node));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (end_node != NULL)
		{
			while (end_node->next != NULL)
			{
				end_node = end_node->next;
			}
			end_node->next = new_node;
		}
		else
		{
			*head = new_node;
		}
	}
	return (new_node);
}
