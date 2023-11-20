#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: struct list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	int r = 0;

	if (h)
	{
		if (!h->next)
		{
			return (1);
		}
		while (h->next)
		{
			r++;
			h = h->next;
		}
		r++;
	}
	return (r);
}
