#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: struct lists
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
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
