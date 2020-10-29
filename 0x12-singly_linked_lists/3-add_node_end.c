#include "lists.h"

/**
 * _strlen - return the size of a string.
 *
 * @str: the string.
 *
 * Return: the size of the string or 0.
 */

size_t	_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (str != NULL)
	{
		while (*(str++))
		{
			len++;
		}
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the list.
 * @str: the string to put on the list.
 *
 * Return: the list with a new node or NULL.
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*new_node;
	list_t	*the_end;

	the_end = *head;
	new_node = (list_t *)malloc(sizeof(new_node));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
		if (the_end != NULL)
		{
			while (the_end->next != NULL)
			{
				the_end = the_end->next;
			}
			the_end->next = new_node;
		}
		else
		{
			*head = new_node;
		}
	}
	return (new_node);
}
