#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: the list to print.
 *
 * Return: the number of nodes.
 */

size_t	print_listint(const listint_t *h)
{
	size_t	len;

	len = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
