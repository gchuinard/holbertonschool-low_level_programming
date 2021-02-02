#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the list to print.
 *
 * Return: the len of the list.
 */

size_t	print_dlistint(const dlistint_t *h)
{
	size_t			len;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
