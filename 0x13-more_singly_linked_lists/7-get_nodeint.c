#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: stuct list
 * @index: index of node to be returned
 * Return: node of the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int t = 0;

	curr = head;
	if (head)
	{
		while (curr->next && t < index)
		{
			curr = curr->next;
			t++;
		}
		if (!curr->next && t != index)
		{
			return (NULL);
		}
		return (curr);
	}
	return (NULL);
}
