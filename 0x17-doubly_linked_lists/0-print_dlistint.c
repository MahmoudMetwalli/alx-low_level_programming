#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
		int r = 0;

	if (h)
	{
		if (!h->next)
		{
			printf("%d\n", h->n);
			return (1);
		}
		while (h->next)
		{
			printf("%d\n", h->n);
			r++;
			h = h->next;
		}
		printf("%d\n", h->n);
		r++;
	}
	return (r);
}
