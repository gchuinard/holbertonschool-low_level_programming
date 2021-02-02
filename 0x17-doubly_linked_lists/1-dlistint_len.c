#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the list to print.
 *
 * Return: the len of the list.
 */

size_t	dlistint_len(const dlistint_t *h)
{
	size_t			len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
