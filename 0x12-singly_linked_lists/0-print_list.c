#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: the list to print.
 *
 * Return: the number of node in the list.
 */

size_t	print_list(const list_t *h)
{
	size_t	len;

	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
