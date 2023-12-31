#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to node
 * Return: num of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h)
	{
		n = 1;
		while (h->next)
		{
			n++;
			h = h->next;
		}
	}
	return (n);
}
